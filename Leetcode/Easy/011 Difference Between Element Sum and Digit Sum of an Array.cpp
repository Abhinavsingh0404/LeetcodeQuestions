#include <cmath>
class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int s = nums.size();
        int digit=0;
        int element = 0;
        int sum = 0;
        int rem = 0;
        int diff= 0;
        //element sum
        for(int i =0;i<s;i++){
            element += nums[i];
            // cout<<element;
        }
        //digit sum
        for(int i = 0; i < s; i++){
            int num = nums[i];
            while(num > 0) {
                digit += num % 10;
                num /= 10;
            }
        }
        //difference 
        diff = abs(digit-element);
        return diff;
    }
};
