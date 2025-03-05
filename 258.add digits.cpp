#include <iostream>

using namespace std;

int addDigits(int num) {
    if (num <= 9) {
        return num;
    } 
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return addDigits(sum);
}

int main() {
    int num;
    cin >> num;  // Take input from the user
    cout << addDigits(num) << endl; // Output the result
    return 0;
}
