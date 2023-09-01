class Solution {
public:
    string reverseWords(string str) {
        int start = 0;
        int n = str.length();
        for (int i = 0; i <= n; i++) {
            if (str[i] == ' ' || i == n) {
                int end = i - 1;
                while (start < end) {
                    swap(str[start++], str[end--]);
                }
                start = i + 1;
            }
        }
        return str;
    }
};