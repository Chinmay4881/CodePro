class Solution {
public:
    int secondHighest(string s) {
        vector<int>f_map;
       for(int i=0;i<s.size();i++){
        if (isdigit(s[i])) {
            f_map.push_back(s[i]-'0');
        }
       }
        sort(f_map.begin(),f_map.end(),greater<int>());
        f_map.erase(unique(f_map.begin(),f_map.end()),f_map.end());
        if(f_map.size()<2){
            return -1;
        }
        return f_map[1];
        
    }

};
