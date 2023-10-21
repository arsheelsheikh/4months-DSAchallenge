class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        
        // If the target is greater than or equal to the largest element, return the first element.
        if (target >= letters[n - 1]) {
            return letters[0];
        }

        int l = 0;
        int r = n - 1;
        int ans = -1;

        while (l <= r) {
            int mid = (l + r) / 2;
            if (letters[mid] > target) {
                r = mid - 1;
                ans = mid;
            } else {
                l = mid + 1;
            }
        }

        // Return the character at the index found in the binary search.
        return letters[ans];
    }
};
