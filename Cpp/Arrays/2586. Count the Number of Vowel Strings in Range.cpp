class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int count = 0;
        for (int i = left; i <= right; i++) {
            string word = words[i];
            if (isVowel(word[0]) && isVowel(word.back())) {
                count++;
            }
        }
        return count; 
    }

private:
    bool isVowel(char c) {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
};
