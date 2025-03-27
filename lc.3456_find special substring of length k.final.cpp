class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        if(s.size()==1){
            return true;
        }
        int count=0;
        for(int i=0;i<s.size();i++){
             if(i > 0 && s[i]==s[i-1]){
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
