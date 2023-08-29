class Solution {

    public static int findPeakElement(int[] nums) {
        int n = nums.length;

        for (int i = 0; i < n; i++) {
            // Check for the peak
            if ((i == 0 || nums[i - 1] < nums[i])
                    && (i == n - 1 || nums[i] > nums[i + 1])) {
                return i;
            }
        }
        return -1;
    }

}
