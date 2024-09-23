class Solution {
public:
    int numberOfMatches(int n) {
        int sum = 0;
        int matches = 0;
        int team = 0;
        while(n>1){
        if(n%2!=0){
            matches = (n-1)/2;
            team = (n-1)/2+1;
            
        }
        else{
            matches = (n/2);
            team =n/2;
        }
        sum +=matches; 
        n= team;
        }
        return sum;
    }
};
