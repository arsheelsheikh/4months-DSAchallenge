class Solution {
public:
    bool detectCapitalUse(string word) {
        for (int i = 1; i < word.length(); i++) {
            // Check if the capitalization of the second character is different from the current character.
            // Also, check if the first character is lowercase and the current character is uppercase.
            if (isupper(word[1]) != isupper(word[i]) ||
                islower(word[0]) && isupper(word[i])) {
                // If any of the two capitalization rules are violated, return false.
                return false;
            }
        }
        // If the loop completes without finding any violations, return true.
        return true;
    }
};
