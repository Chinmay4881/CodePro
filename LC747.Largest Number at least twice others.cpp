
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return -1;
        if (n == 1) return 0;

        int maxv = nums[0];
        int maxi = 0;
        for (int i = 1; i < n; ++i) {
            if (nums[i] > maxv) {
                maxv = nums[i];
                maxi = i;
            }
        }

        vector<int> sortedNums = nums;  
        sort(sortedNums.begin(), sortedNums.end());
        if (sortedNums[n - 1] >= 2 * sortedNums[n - 2]) {
            return maxi;
        }
        return -1;
    }
};
