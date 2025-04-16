class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>nova;
        sort(nums.begin(),nums.end());
        nova.push_back(nums);
        while(next_permutation(nums.begin(),nums.end())){
        nova.push_back(nums);
        }
         return nova;
    }
};
