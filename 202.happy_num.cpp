#include <iostream>
using namespace std;
bool isHappy(int n) {
    if(n==1){
        return true;
    }
    if(1<n&&n<=6){
        return false;
    }
    int sum = 0; 
    while (n > 0) {
        int digit = n % 10;  
        sum += digit * digit; 
        n /= 10; 
    }
    n=sum;
    return  isHappy(n);
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout<<isHappy(n)<<endl;

    return 0;
}