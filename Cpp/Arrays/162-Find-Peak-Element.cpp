class Solution {
public:
    int findPeakElement(vector<int>& arr) {
    
    int n = arr.size(); 

    for (int i = 0; i < n; i++) {
        //Check for the peak
        if ((i == 0 || arr[i - 1] < arr[i])
                && (i == n - 1 || arr[i] > arr[i + 1])) {
            return i;
        }
    }
    return -1;
    }
};