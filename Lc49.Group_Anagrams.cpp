class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>nova;
        unordered_map<string,vector<string>>fmap;
        for(string x:strs){
            string sortstr=x;
            sort(sortstr.begin(),sortstr.end());
            fmap[sortstr].push_back(x);
        }
         for(auto const&pair:fmap){
            nova.push_back(pair.second);
         }
        return nova;
    }
};
