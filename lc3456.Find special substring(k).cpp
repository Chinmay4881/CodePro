class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        int count=1;
        for(int i=1;i<s.size();i++){
             if(s[i]==s[i-1]){
                count++;
             }
             else{
                count=1;
             }
             if(count==k){
                if((i-k<0||s[i-k]!=s[i])&&(i+1>=s.size()||s[i+1]!=s[i])){
                    return true;
                }
             }
        }
        return false;
    }
};
