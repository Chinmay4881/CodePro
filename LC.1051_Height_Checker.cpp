class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>follow=heights;
        sort(follow.begin(),follow.end());
        int count=0;
        for(int i=0;i<follow.size();i++){
            if(follow[i]!=heights[i]){
                count++;
            }
        }
        return count;
    }
};
