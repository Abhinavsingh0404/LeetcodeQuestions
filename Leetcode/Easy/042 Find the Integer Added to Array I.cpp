class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int s1= 0;
        int s2 = 0;
        int n = nums1.size();

        for(int i =0;i<n;i++){
            s1 += nums1[i];
            s2 += nums2[i];
        }
        return (s2-s1)/n;
    }
};
