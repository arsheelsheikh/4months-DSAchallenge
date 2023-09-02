class Solution {
public:
    int maxPower(string s) {
     int n = s.size();
        int ans = 0;
        for (int i = 0, j = 0; i < n; i++) {
            while (s[j] != s[i])
                j++;

            ans = max(ans, i - j + 1);
        }

        return ans;
    }
};