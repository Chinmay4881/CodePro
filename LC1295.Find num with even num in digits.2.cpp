class Solution {
public:
    int findNumbers(vector<int>& nums) {
        return count_if(nums.begin(), nums.end(), [](int x) {
            return (int)to_string(x).size() % 2 == 0;
        });
    }
};
