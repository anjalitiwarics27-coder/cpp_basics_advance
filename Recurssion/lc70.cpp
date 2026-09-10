class Solution:
    def climbStairs(self, n: int) -> int:
        def nCr(n: int, r: int) -> int:
            if r < 0 or r > n:
                return 0
            if r == 0 or r == n:
                return 1
            # nCr = n! / (r! * (n - r)!) optimized to avoid large numbers
            r = min(r, n - r)
            num = 1
            den = 1
            for i in range(r):
                num *= (n - i)
                den *= (i + 1)
            return num // den

        total_ways = 0
        
        # Loop through all possible counts of 2-step moves
        for two_steps in range(n // 2 + 1):
            one_steps = n - 2 * two_steps
            total_moves = one_steps + two_steps  # equivalent to (n - two_steps)
            
            # Add ways to arrange two_steps among total_moves positions
            total_ways += nCr(total_moves, two_steps)
            
        return total_ways