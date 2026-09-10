class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int write = 0; // Pointer to place compressed characters
        int i = 0;     // Pointer to iterate through the array

        while (i < n) {
            char currentChar = chars[i];
            int count = 0;

            // Count the frequency of consecutive repeating characters
            while (i < n && chars[i] == currentChar) {
                i++;
                count++;
            }

            // Write the character
            chars[write++] = currentChar;

            // If character appears more than once, write its count
            if (count > 1) {
                string countStr = to_string(count);
                for (char c : countStr) {
                    chars[write++] = c;
                }
            }
        }

        // Return the new length of the compressed array
        return write;
    }
};