class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        int temp = digits[size-1]+1;

        if(temp<=9){
            digits[size-1]++;
            return digits;
        }
        else{
            bool flag=true;
            //kya wo increase karega
            for(int i=0;i<size;i++){
                if(digits[i]!=9){
                flag=false;
                break;
                }
            }
            if(flag){
            //if all digit are nine
            digits.push_back(0);
            for(int i=1;i<=size;i++){
                digits[i]=0;
            }
            digits[0]=1;
            return digits;

            }else{
            //if NOT all are nine
            cout<<"karega";
            digits[size-1]=0;
            for(int i=size-2;i>=0;i--){
                if(digits[i]==9)
                digits[i]=0;
                else{
                    digits[i]++;
                    break;
                }
            }
            return digits;
            }  
        }
        return digits;
        
    }
};
