class Solution {
public:
    int findNonMinOrMax(std::vector<int>& nums) {
        int n = nums.size();
        if (n < 3) {
            return -1;
        }

        sort(nums.begin(), nums.end());

        int minVal = nums[0];
        int maxVal = nums[n - 1];

        // find a number that is neither min nor max
        for (int i = 1; i < n - 1; i++) {
            if (nums[i] != minVal && nums[i] != maxVal) {
                return nums[i];
            }
        }

        return -1;
    }
};

//2
class Solution {
public:
    int findNonMinOrMax(std::vector<int>& nums) {
        int n = nums.size();
        
        if (n < 3) {
            return -1; 
        }

        int minVal = INT_MAX;
        int maxVal = INT_MIN;

        for (int num : nums) {
            minVal = min(minVal, num);
            maxVal = max(maxVal, num);
        }

        // find a number that is neither min nor max.
        for (int num : nums) {
            if (num != minVal && num != maxVal) {
                return num;
            }
        }

        return -1;
    }
};

//3
class Solution {
 public:
  int findNonMinOrMax(vector<int>& nums) {
    if (nums.size() < 3)
      return -1;
    sort(nums.begin(), nums.begin() + 3);
    return nums[1];
  }
};
