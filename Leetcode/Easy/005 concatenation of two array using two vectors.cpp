class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int>ab(2*n);
        for (int i = 0 ;i<n;i++){
            ab[i]=nums[i];
        }
        for(int i =0;i<n;i++){
            ab[i+n]=nums[i];
            //we are using i+n because we need to start the where 
            //it ended last
        }
        return ab;
    }
};
