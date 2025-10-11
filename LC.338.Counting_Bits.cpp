class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>final;
        for(int i=0;i<=n;i++){
            final.push_back(__builtin_popcount(i));
        }
        return final;
    }
};
