class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num <= 1) return false;
        vector<int>ab;

        for(int i =1;i<num;i++){
            if(num%i==0){
                ab.push_back(i);
            }
        }
        int sum = 0;
        for(int i =0;i<ab.size();i++){
            sum=sum+ab[i];
        }
        return sum==num;
    }
};
