class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
      for(auto &row:grid){
        for(auto x:row){
            if(x<0){
                count++;
            }
        }
      }
      return count;
    }
};
