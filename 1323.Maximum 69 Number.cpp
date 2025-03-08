#include <iostream>
#include <string>

using namespace std;

int maximum69Number(int num) {
    string s = to_string(num);
    for (char &c : s) {
        if (c == '6') {
            c = '9';
            break;
        }
    }
    return stoi(s);
}

int main() {
    int num;
    cin >> num;  // Take input
    cout << maximum69Number(num) << endl;  // Print result
    return 0;
}
