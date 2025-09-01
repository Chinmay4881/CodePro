class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int total=n*n;
        vector<int>nova(total+1,0);
        
        for(auto &row:grid){
            for(auto x:row){
                nova[x]++;
            }
        }
      int repeat=-1;
      int miss=-1;
      for(int i=1;i<=total;i++){
        if(nova[i]==2){
            repeat=i;
        }
        else if(nova[i]==0){
            miss=i;
        }
      }
      return{repeat,miss};
    }
};
