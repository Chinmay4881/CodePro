class Solution {
public:
    int smallestEvenMultiple(int n) {
        while(n%n==0){
        if(n%2==0){
            return n;
        }
        else{
            n=n*2;
        }
        }
        return n;
    }
};
