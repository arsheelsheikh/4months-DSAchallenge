class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        for(int i=0; i<n; i++){
            if(nums[i]!= 0){
                swap(nums, i,cnt);
                cnt++;
            }
        }
    }
    // Swap function
    static void swap(std::vector<int>& nums, int first, int second) {
        int temp = nums[first];
        nums[first] = nums[second];
        nums[second] = temp;
    }
};