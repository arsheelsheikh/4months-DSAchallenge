class Solution {
public:
    void rotate(std::vector<int>& nums, int k) {
        k = k % nums.size();
        
        // Reverse the entire array
        reverse(nums, 0, nums.size() - 1);
        
        // Reverse the first part up to k-1
        reverse(nums, 0, k - 1);
        
        // Reverse the remaining part from k to the end
        reverse(nums, k, nums.size() - 1);
    }

    void reverse(std::vector<int>& nums, int start, int end) {
        while (start < end) std::swap(nums[start++], nums[end--]);
    }
};
