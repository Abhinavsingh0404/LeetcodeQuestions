class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int multiple = 10;
        int num = ((purchaseAmount + multiple / 2) / multiple) * multiple;
        int n = 100 - num;
        return n;
    }
};

