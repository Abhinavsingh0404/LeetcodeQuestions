class Solution {
public:
    int divide(int dividend, int divisor) {
        if (divisor == 0) {
            throw std::invalid_argument("Division by zero is undefined");
        }
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        long long ans = static_cast<long long>(dividend) / divisor;
        return static_cast<int>(ans);
        //static_cast is a type-casting operator in C++ that is primarily used for performing safe, 
        //compile-time type conversions
        //Converting between fundamental data types (e.g., int to double).
    }
};
