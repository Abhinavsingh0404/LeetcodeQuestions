class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int n = nums.size();
        int a = 0;
        int c = 0;
        for(int i =0;i<n;i++){
            a += nums[i];
            if(a==0){
                c++;
            }
        }
        return c;
    }
};
