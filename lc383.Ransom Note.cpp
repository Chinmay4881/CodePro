class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>f_map;
        for(char c:magazine){
            f_map[c]++;
        }
        for(char c:ransomNote){
            if(f_map[c] ==0){
                return false;
            }
            f_map[c]--;
        }
        return true;
    }

};
