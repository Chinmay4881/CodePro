class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return 0;
        }
        if(n==2){
            if(nums[0]>nums[1]){
                return 0;
            }
            else{
                return 1;
            }
        }
        int high=n-1;
        int low=high-2;
        while(low>=0){
            //int high=low+2;
            int mid=(low+high)/2;
            if(nums[mid]>=nums[low]&&nums[mid]>=nums[high]){
                return mid;
            }
            if(nums[low]>nums[mid]&&low==0){
                return 0;
            }
            if(nums[high]>nums[mid]&&high==n-1){
                return n-1;
            }
            if(nums[low]>nums[mid] ||nums[high]>nums[mid]){
                low--;
                high--;
            }
        }
        return -1;
    }
};
