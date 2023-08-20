#include <vector>

class Solution {
public:
    std::vector<int> findDisappearedNumbers(std::vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        while (i < n) {
            int correct = nums[i] - 1;
            if (nums[i] != nums[correct]) {
                swap(nums, i, correct);
            } else {
                i++;
            }
        }

        // Find missing numbers
        std::vector<int> ans;
        for (int index = 0; index < nums.size(); index++) {
            if (nums[index] != index + 1) {
                ans.push_back(index + 1);
            }
        }

        return ans;
    }

    // Swap function
    static void swap(std::vector<int>& nums, int first, int second) {
        int temp = nums[first];
        nums[first] = nums[second];
        nums[second] = temp;
    }
};
