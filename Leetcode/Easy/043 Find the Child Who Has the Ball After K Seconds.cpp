class Solution {
public:
    int numberOfChild(int n, int k) {
        n--;
        int temp = k / n;
        int rem = k % n;

        if(temp % 2 == 0) 
            return rem; 
        else 
            return (n - rem);
	}
};
