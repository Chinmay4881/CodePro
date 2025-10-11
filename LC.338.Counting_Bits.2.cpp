class Solution {
public:
    vector<int> countBits(int n) {
       vector<int> nov(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            nov[i] = nov[i >> 1] + (i & 1);
        }
        return nov;
    }
};
