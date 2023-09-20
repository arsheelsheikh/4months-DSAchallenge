class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());

        int n = salary.size();

        int total_salary = 0;

        for (int i = 1; i < n - 1; i++) {
            total_salary += salary[i];
        }

        // Use floating-point division to get the average
        return static_cast<double>(total_salary) / (n - 2);
    }
};
