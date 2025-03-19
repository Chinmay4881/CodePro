class Solution {
public:
    char findTheDifference(string s, string t) {
       char result=0;
       for(char x:s){
         result=result^x;
       }
        for(char x:t){
         result=result^x;
       }
       return result;
    }
};
