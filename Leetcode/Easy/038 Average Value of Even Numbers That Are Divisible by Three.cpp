class Solution {
public:
    int averageValue(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int count=0;
        for(int i =0;i<n;i++){
            if(nums[i]%3==0&&nums[i]%2==0){
                sum+=nums[i];
                count++;
            }

        }
        if (count == 0) return 0;
        return static_cast<double>(sum) / count;
    }
};
