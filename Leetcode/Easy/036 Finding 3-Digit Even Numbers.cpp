class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
    set<int> result;
    for (int i = 0; i < digits.size(); i++) {
        for (int j = 0; j < digits.size(); j++) {
            for (int k = 0; k < digits.size(); k++) {
                if (i != j && j != k && i != k) {
                    int number = digits[i] * 100 + digits[j] * 10 + digits[k];
                    
                    
                    if (digits[i] != 0 && digits[k] % 2 == 0) {
                        result.insert(number);
                    }
                }
            }
        }
    }
    return vector<int>(result.begin(), result.end());
}
};
