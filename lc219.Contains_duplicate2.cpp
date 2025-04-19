class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
       unordered_map<int, int> f_map; 
        for (int i = 0; i < nums.size(); i++) {
            if (f_map.find(nums[i]) != f_map.end()) {
                if (i - f_map[nums[i]] <= k) {
                    return true;
                }
            }
            f_map[nums[i]] = i; 
        }
        return false;
    }
};
