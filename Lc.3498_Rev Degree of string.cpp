class Solution {
public:
    int reverseDegree(string s) {
       
         int result = 0;
         int i=1;
        for (char c:s) {
            result += (26 - (c - 'a'))*i;  
            i++;
        }
        return result;
    }
};
