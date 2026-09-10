class Solution {
public:
    string reverseWords(string s) {
        string result = "";
        int n = s.length();
        int i = n - 1;

        while (i >= 0) {
            // Skip trailing or intermediate spaces
            while (i >= 0 && s[i] == ' ') {
                i--;
            }
            if (i < 0) break;

            // Find the start of the current word
            int j = i;
            while (j >= 0 && s[j] != ' ') {
                j--;
            }

            // Append space before word if result is not empty
            if (!result.empty()) {
                result += " ";
            }

            // Extract and append the word
            result += s.substr(j + 1, i - j);

            // Move pointer to the character before the word
            i = j;
        }

        return result;
    }
};