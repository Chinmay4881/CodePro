class Solution {
public:
    bool judgeSquareSum(int c) {
        long long  low=0;
        long long high = (long long) sqrt(c);
        while(low<=high){
            long long sum=low*low + high*high;
            if((sum)==c){
               return true;
            }
            else if (sum<c){
                low=low+1;
            }
            else{
                high--;
            }
        }
        return false;
    }
};
