class Solution {
public:
    int arraySign(vector<int>& nums) {
        int  count=0;
        int zoro=0;
        for(int i=0;i<nums.size();i++){
           if(nums[i]<0){
            count++;
           }
           if(nums[i]==0){
            zoro++;
            if(zoro==1){
                break;
            }
           }
        }
        if(count%2!=0){
            return -1;
        }
        else if(zoro==1){
            return 0;
        }
        else{
            return 1;
        }
    }
};
