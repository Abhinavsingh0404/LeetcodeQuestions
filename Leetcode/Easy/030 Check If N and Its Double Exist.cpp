class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        bool a = false;
        for(int i =0;i<arr.size()-1;i++){
            for(int j = i+1;j<arr.size();j++){
                if(arr[i]==2*arr[j]){
                a = true;
                }
                else if(arr[j]==2*arr[i]){
                    a = true;
                }
            }
        }
        return a;
    }
};
