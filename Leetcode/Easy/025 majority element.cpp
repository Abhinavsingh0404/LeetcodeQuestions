class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int ele = 0;

        for(int i = 0; i < n; i++) {
            if (count == 0) {
                ele = nums[i];
            }
            count += (nums[i] == ele) ? 1 : -1;
        }

        return ele;
    }
};

