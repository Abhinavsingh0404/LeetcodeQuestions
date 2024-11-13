class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());

        int s = salary.size();
        int sum = 0;
        int count = 0;
        for(int i = 1; i<s-1;i++){
            sum+=salary[i];
            count++;
        }
        return static_cast<double>(sum)/count;
    }
};
