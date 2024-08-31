class Solution {
public:
    int scoreOfString(string s) {
        int size=s.length();
        int arr[size];
        // int temp=0;
        int ans=0;
        
        //getting the every element of string stored in the array
        for(int i =0;i<size;i++){

            arr[i]=(int)s[i];
        }
        for(int i=0;i<size-1;i++){
            int temp = arr[i]-arr[i+1];
            if(temp<0){
                temp=temp*-1;
            }
            ans= ans+temp;
        }
        return ans;
    }
};
