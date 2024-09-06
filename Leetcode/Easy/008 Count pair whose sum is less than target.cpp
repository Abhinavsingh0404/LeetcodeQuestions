class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int s = nums.size();
        int count = 0;
        for(int i =0;i<s-1;i++){
            for(int j =i+1;j<s;j++){
                if(target>nums[i]+nums[j])
                {
                    count++;
                }
                }
            }
        return count;
    }
};
