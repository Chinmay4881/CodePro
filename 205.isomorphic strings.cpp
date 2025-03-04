#include <iostream>
#include <unordered_map>
using namespace std;

bool isIsomorphic(string s, string t) {
    if (s.length() != t.length()) return false;

    unordered_map<char, char> map_s, map_t;
    
    for (int i = 0; i < s.length(); i++) {
        char c1 = s[i], c2 = t[i];

        if (map_s.count(c1) && map_s[c1] != c2) return false;
        if (map_t.count(c2) && map_t[c2] != c1) return false;

        map_s[c1] = c2;
        map_t[c2] = c1;
    }
    
    return true;
}

int main() {
    string s, t;
    cout << "Enter first string: ";
    cin >> s;
    cout << "Enter second string: ";
    cin >> t;

    cout << (isIsomorphic(s, t) ? "true" : "false") << endl;

    return 0;
}
