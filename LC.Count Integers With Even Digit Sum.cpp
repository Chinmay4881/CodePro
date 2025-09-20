class Solution {
public:
    int countEven(int num) {
        int nu=num;
        int sum=0;
        while(nu>0){
            sum=sum+nu%10;
            nu=nu/10;
        }
        if(sum%2==0){
            return num/2;
        }
        return (num-1)/2;
    }
};
