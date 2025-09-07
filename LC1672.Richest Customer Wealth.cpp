class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxpaisa=0;
        for(auto &row:accounts){
             int currentpaisa=0;
            for(auto x:row){
                currentpaisa=currentpaisa + x;
            }
          maxpaisa=max(currentpaisa,maxpaisa);
        }
        
        return maxpaisa;
    }
};
