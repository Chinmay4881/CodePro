class Solution {
public:
    bool canWinNim(int n) {
        //return n%4 !=0;
        if(n%4==0){
            return false;
        }
        else{
            return true;
        }
        
    }
};
