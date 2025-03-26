class Solution {
public:
    bool hasSameDigits(string s) {
            while(s.size()>2){
                string temp ="";
                for( int i=0;i<s.size()-1;i++){
                int cur = int(s[i] - '0');
                int next = int(s[i+1] - '0');
                int ans = (cur + next) % 10;
                // s[i]=(s[i] +s[i+1])%10;
                temp = temp + char(ans + '0');
            }
            s=temp;
        }

        if(s[0]==s[1]){
            return true;
        }
       
        return false;
    }
};
