class Solution {
public:
    bool isThree(int n) {
        if(n<0 ||n==0||n==1||n==2){
            return false;
        }
        int count=0;
        for(int i=2;i<n;i++){
            if(n%i==0){
                count++;
                if(count>1){
                    return false;
                    break;
                }
            }
        }
        if(count==0){
            return false;
        }
        return true;
    }
};
