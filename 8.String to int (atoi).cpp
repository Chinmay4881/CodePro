#include <iostream>
#include <string>
#include <climits>

using namespace std;

int myAtoi(string s) {
    long num = 0;
    int sign = 1, n = s.size(), i = 0;
    
    while (i < n && isspace(s[i])) {
        i++;
    }
    
    if (i < n && (s[i] == '+' || s[i] == '-')) {
        sign = (s[i] == '-') ? -1 : 1;
        i++;
    }
    
    while (i < n && isdigit(s[i])) {
        num = num * 10 + (s[i] - '0');
        i++;
        
        if (sign * num < INT_MIN) return INT_MIN;
        if (sign * num > INT_MAX) return INT_MAX;
    }
    
    return sign * num;
}

int main() {
    string s;
    cin >> s;
    cout << myAtoi(s) << endl;
    return 0;
}
