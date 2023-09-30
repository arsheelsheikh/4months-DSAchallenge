class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for (int n : nums) {
            if (seen.find(n) != seen.end()) {
                return true; // Found a duplicate
            }
            seen.insert(n); // Add the element to the set
        }

        return false; // No duplicates found
    }
};