#include <iostream>
#include <vector>

using namespace std;

int singleNumber(vector<int>& nums) {
    int single = 0;
    for (int x : nums) {
        single = x ^ single;
    }
    return single;
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};  
    cout << singleNumber(nums) << endl;  
    return 0;
}
