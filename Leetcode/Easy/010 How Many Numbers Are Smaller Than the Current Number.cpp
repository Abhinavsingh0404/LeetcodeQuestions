class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int s = nums.size();
        vector<int>ab(s,0);//initilizing it with  to avoid using uninitialized 
        //values, which can lead to undefined behavior.
        for(int i =0;i<s;i++){
        int count = 0;
            for(int j =0;j<s;j++){
                if(nums[i]>nums[j]){
                    count=count+1;
                }
            }
            ab[i]=count;
        }
        return ab;
    }
};
