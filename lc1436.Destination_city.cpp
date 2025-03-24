class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string>find;
        for(auto& path:paths){
            find.insert(path[0]);
        }
        for(auto&path:paths){
            if(find.find(path[1])==find.end()){
                return path[1];
            }
        }
        return " ";
    }
};
