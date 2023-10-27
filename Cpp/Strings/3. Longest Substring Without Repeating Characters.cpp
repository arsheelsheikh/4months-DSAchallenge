class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxLength = 0;
        int left = 0; 
        unordered_set<char> charSet;

        for (int right = 0; right < n; right++) {
            char currentChar = s[right];

            while (charSet.count(currentChar)) {
                charSet.erase(s[left]);
                left++;
            }

            charSet.insert(currentChar);  
            maxLength = max(maxLength, right - left + 1);  
        }

        return maxLength;
    }
};
