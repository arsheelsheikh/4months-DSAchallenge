class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int sum = 0;
        int cnt = 0;
        int n = arr.size();
        int remove = n*0.05;
        for(int i=remove; i<n-remove; i++){
            sum+=arr[i];
            cnt++;
        }
        return static_cast<double> (sum)/cnt;
    }
};