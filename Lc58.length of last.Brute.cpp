class Solution {
public:
    int lengthOfLastWord(string s) {
        int count =1;
        reverse(s.begin(),s.end());
        for(int i=0;i<s.size();i++){
        if(s[i]!=' '&&s[i+1]==' '){
            return count;
        }
        else{
            count++;
        }
        }
         return 0;
    }
};
