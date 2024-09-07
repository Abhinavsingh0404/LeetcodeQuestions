#include <cmath>
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int s = nums.size();
        vector<int>ab1(s,0);//initilizing the leftmost with zero
        vector<int>ab2(s,0);//initilizing the rightmost with zero
        vector<int>res(s);//resultant vector

        for(int i =1;i<=s-1;i++){
            ab1[i]=ab1[i-1]+nums[i-1];
        }
        //using s-2 because last element is at s-1;
        for(int i =s-2;i>=0;i--){
            ab2[i]=ab2[i+1]+nums[i+1];//using + because we need to
            // move backword in the vector

        }
        for(int i =0;i<s;i++){
            res[i]=abs(ab1[i]-ab2[i]);
        }
        return res;
    }
};
