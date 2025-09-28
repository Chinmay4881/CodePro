class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n= nums.size();
        if(n<3){
            return -1;
        }
        int a=nums[0],b=nums[1],c=nums[2];
        if(a>b &&a<c||a<b &&a>c){
            return a;
        }
        else if(b>a && b<c||b<a && b>c){
            return b;
        }
        return c;
    }
};
