class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,char>f_map;
        //char x;
        for( char x:s){
            f_map[x]++;
        }
        for(char x:t){
            if(--f_map[x]<0){
                return x;
            }
        }
    
     return 0;
    }
};
