class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected = heights; // Create a copy of heights
        sort(expected.begin(), expected.end()); // Sort the copy in non-decreasing order
        
        int count = 0; // Initialize a counter for the number of mismatches
        
        for (int i = 0; i < heights.size(); ++i) {
            if (heights[i] != expected[i]) {
                ++count; // Increment count when there is a mismatch
            }
        }
        
        return count; // Return the total count of mismatches
    }
};
