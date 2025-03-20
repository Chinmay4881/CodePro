class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        if ( nums.size()==1){
            return 0;
        }
        int maxo=0;
        for(size_t i=0;i<nums.size();i++){
            for(size_t j=i+1;j<nums.size();j++){
                 maxo=max(maxo,nums[i]^nums[j]);
            }
        }
             return maxo;
    }
};
