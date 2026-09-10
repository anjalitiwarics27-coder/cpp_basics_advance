class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        def solve(r: int, c: int) -> int:
            # Base cases: out of bounds
            if r >= m or c >= n:
                return 0
            # Base case: reached destination
            if r == m - 1 and c == n - 1:
                return 1
            
            # Recursive call: move down + move right
            return solve(r + 1, c) + solve(r, c + 1)
        
        return solve(0, 0)