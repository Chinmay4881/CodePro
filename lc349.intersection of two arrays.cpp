class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>news;
        unordered_map<int,int>fmap;
        for(int c:nums1){
            fmap[c]=1;
        }
        for(int c:nums2){
            if(fmap[c]==1){
                news.push_back(c);
                fmap[c]=0;

            }
        }
        return news;
    }
};
