class Solution {
public:
    string convertToBase7(int num) {
    if (num == 0) return "0";
    bool isNegative = num < 0;
    num = abs(num);
    string base7 = "";
    
    while (num > 0) {
        base7 = to_string(num % 7) + base7;
        num /= 7;
    }
    
    return isNegative ? "-" + base7 : base7;

    }
};
