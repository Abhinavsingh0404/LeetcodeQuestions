class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int size = nums.size();
        for(int i=0;i<size-1;i++){
            for(int j=0;j<size-i-1;j++){
                if(nums[j]>=nums[j+1]){
                    int temp=nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=temp;
                }
            }
        }
        double abhi=999999.9; 
        int k=size-1;
        for(int i=0;i<size/2;i++){
            if(abhi>(double)(nums[i]+nums[k])/2)
            abhi=(double)(nums[i]+nums[k])/2;
            k--;
        }
        return abhi;
    }
};
