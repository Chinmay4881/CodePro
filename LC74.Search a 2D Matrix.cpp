class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int>nova;
        for(auto &row:matrix){
            for(auto x:row){
                nova.push_back(x);

            }
        }
        return find(nova.begin(),nova.end(),target)!=nova.end();
    }
};
