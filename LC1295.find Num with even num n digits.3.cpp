class Solution {
public:
    int findNumbers(vector<int>& nums) {
        return count_if(nums.begin(), nums.end(), [](int x) {
            int digits = (int)log10(x) + 1;  
            return digits % 2 == 0;
        });
    }
};
