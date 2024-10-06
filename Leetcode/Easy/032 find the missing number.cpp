class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int as=0;
        int es=n*(n+1)/2;

        for(int num:nums){
            as+=num;
        }
        return es-as;
    }
};
