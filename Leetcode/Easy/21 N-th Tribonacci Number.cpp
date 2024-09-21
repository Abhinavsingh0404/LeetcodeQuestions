class Solution {
public:
    int tribonacci(int n) {
        vector<int>ab;
        int a = 0;
        int b = 1;
        int c = 1;
        ab.push_back(a);
        ab.push_back(b);
        ab.push_back(c);
        if (n == 0) return 0;
        if (n == 1 || n == 2) return 1;
        int temp  = 0;
        int ans = 0;
        for(int i = 3;i<=n;i++){
            temp = a + b + c;
            ab.push_back(temp);
            a = b;
            b = c;
            c = temp;
            cout<<ab[i]<<" ";
        }
        int s = ab.size();
        for(int i =0;i<s-1;i++){
            ans = ab[s-1];
        }
        return ans;
    }
};
