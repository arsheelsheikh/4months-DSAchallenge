class Solution {
public:
    bool detectCapitalUse(string word) {
        for (int i = 1; i < word.length(); i++) {
            if (isupper(word[1]) != isupper(word[i])) {
                return false; // Capitalization rule violated
            }
        }
        
        return true; // Capitalization follows the rules
    }
};
