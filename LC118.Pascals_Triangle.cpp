class Solution {
public:
    vector<int>genrow(int row){
        long long ans=1;
        vector<int>ansi;
        ansi.push_back(1);
        for(int col=1;col<row;col++){
            ans=ans*(row-col);
            ans=ans/col;
            ansi.push_back(ans);
        }
         return ansi;
    }
      
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>anso;
        for(int i=1;i<=numRows;i++){
            anso.push_back(genrow(i));
        }
        return anso;
    }
};
