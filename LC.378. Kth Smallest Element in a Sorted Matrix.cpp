class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int>nova;
        for(auto &row:matrix){
            for(auto x:row){
         nova.push_back(x);
            }
        }
        sort(nova.begin(),nova.end());
        return nova[k-1];
      
    }
};
