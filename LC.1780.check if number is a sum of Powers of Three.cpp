class Solution {
public:
    bool checkPowersOfThree(int n) {
        while(n>0){
            int m=n%3;
            if(m==2){
                return false;
                break;
            }
            n=n/3;
        }
        return true;
    }
};
