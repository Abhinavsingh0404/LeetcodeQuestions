class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int sum=0;
        int value=24;
        int ti=arrivalTime+delayedTime;

        if(ti%value!=0 &&ti<24){
            sum=ti;
        }
        else if(ti>24){
            sum=ti-24;
        }
        else{
            sum=0;
        }
        return sum;
    }
};
