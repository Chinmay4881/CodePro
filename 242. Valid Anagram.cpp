#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    if (s.size() != t.size()) return false;

    unordered_map<char, int> f_map;

    for (char c : s) f_map[c]++;
    for (char c : t) {
        f_map[c]--;
        if (f_map[c] < 0) return false;
    }
    
    return true;
}

int main() {
    string s, t;
    cin >> s >> t;
    cout << isAnagram(s, t);
    return 0;
}
