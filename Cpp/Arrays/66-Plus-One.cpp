class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] == 9) {
                digits[i] = 0;
            } else {
                digits[i]++;
                return digits;
            }
        }
        // if all digits in arrays are 9, then arrays size will increase by 1
        vector<int> result(digits.size() + 1);
        result[0] = 1;
        return result;
    }
};