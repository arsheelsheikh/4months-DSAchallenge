class Solution {
public:
    string reverseWords(string str) {
        int start = 0;
        int n = str.length();
        for (int i = 0; i <= n; i++) {
            // Check if the current character is a space or if we have reached the end of the string.
            if (str[i] == ' ' || i == n) {
                int end = i - 1; // Calculate the ending position of the current word.
                // Reverse the characters within the current word (from start to end).
                while (start < end) {
                    swap(str[start++], str[end--]);
                }
                start = i + 1; // Update the starting position for the next word.
            }
        }
        return str;
    }
};