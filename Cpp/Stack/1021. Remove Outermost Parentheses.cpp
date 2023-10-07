class Solution {
public:
    string removeOuterParentheses(string S) {
        string result;
        int opened = 0;
        for (char c : S) {
            if (c == '(' && opened++ > 0) 
                result += c;
            if (c == ')' && opened-- > 1) 
                result += c;
        }
        return result;
    }
};