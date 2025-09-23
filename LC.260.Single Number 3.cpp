class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>nova;
        int n=nums.size();
        for(int i=0;i<n;){
            if(i==n-1 || nums[i]!=nums[i+1]){
                nova.push_back(nums[i]);
                i++;
            }
            else{
                i=i+2;
            }
        }
        return nova;
    }
