class Solution {
public:
    int lengthOfLongestSubstring(string s) {

    
        unordered_map<char, int> mp;  // store last index of char
        int ans = 0, l = 0;

        for (int r = 0; r < s.size(); r++) {
            if (mp.find(s[r]) != mp.end()) {
                l = max(l, mp[s[r]] + 1); // jump left pointer
            }
            mp[s[r]] = r;
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};
    
