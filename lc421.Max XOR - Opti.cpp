class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int maxi = 0, mask = 0;

        for (int bit = 31; bit >= 0; --bit) {
            mask |= (1 << bit);  
            unordered_set<int> prefixes;

            for (int num : nums) {
                prefixes.insert(num & mask);  
            }

            int drop = maxi | (1 << bit);  

            for (int prefix : prefixes) {
                if (prefixes.count(prefix ^ drop)) {  
                    maxi = drop;  
                    break;
                }
            }
        }
        return maxi;
    }
};
