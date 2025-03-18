class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> f_map1;  
        unordered_map<string, char> f_map2;  
        stringstream ss(s);
        string word;
        int i = 0;

        while (ss >> word) {
            if (i >= pattern.size()) return false; 
            char ch = pattern[i];

            if (f_map1.count(ch) && f_map1[ch] != word) return false;
            if (f_map2.count(word) && f_map2[word] != ch) return false;

            f_map1[ch] = word;
            f_map2[word] = ch;
            i++;
        }

        if(i == pattern.size()){
            return true;
        }
        return 0;
    }
};
