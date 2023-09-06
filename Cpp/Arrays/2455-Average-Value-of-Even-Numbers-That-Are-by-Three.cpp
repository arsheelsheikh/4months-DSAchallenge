class Solution {
public:
    int averageValue(vector<int>& nums) {
        int n = nums.size();
        int sum = 0, cnt = 0;
        
        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 0 && nums[i] % 3 == 0) {
                sum += nums[i];
                cnt++;
            }
        }
        
        if (cnt != 0) {
            int avg = sum / cnt;
            return avg;
        } else {
            return 0; // Return 0 if no elements meet the criteria.
        }
    }
};