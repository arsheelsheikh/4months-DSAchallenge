class Solution {
public:
    bool checkRecord(string s) {
        int n = s.length();
        int cnt = 0, cnt1 = 0;
        
        for (int i = 0; i < n; i++) {
            if (s[i] == 'A') {
                cnt++;
                cnt1 = 0; // Reset consecutive late days when absent
            } else if (s[i] == 'L') {
                cnt1++;
            } else {
                cnt1 = 0; // Reset consecutive late days when present
            }
            
            if (cnt >= 2 || cnt1 >= 3) {
                return false;
            }
        }
        return true;
    }
};
