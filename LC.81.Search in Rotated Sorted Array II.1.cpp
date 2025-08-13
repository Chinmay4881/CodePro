class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int  low=0, high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(target==nums[mid]){
                return true;
            }
            else if (target<nums[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return false;
    }
};
