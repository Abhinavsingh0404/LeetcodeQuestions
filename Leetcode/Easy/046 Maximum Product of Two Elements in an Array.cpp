class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max = 0;
        int m=0;
        int s = nums.size();
        for(int i = 0;i<s-1;i++){
            for(int j = i+1;j<s;j++){
                 m = (nums[i]-1)*(nums[j]-1);
            if(m > max){
            max = m;
            }
        }
        }
        
        return max;
    }
};
