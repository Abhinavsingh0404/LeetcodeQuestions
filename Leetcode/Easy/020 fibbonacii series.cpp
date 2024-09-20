class Solution {
public:
    int fib(int n) {
        vector<int>ab;
        int a = 0;
        int b = 1;
        ab.push_back(a);
        ab.push_back(b);
        int temp = 0;
        if(n<=0)return 0;
        
        int ans =0;
        for (int i = 2; i <= n; ++i) {
            int temp = a + b;
            ab.push_back(temp);
            a = b;
            b = temp;
        }
        int x = ab.size();
        for(int i =0;i<=x;i++){
            ans= ab[x-1];
        }
        return ans;
    }
};
