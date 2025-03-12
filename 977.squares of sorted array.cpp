#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        nums[i] *= nums[i];
    }

    sort(nums.begin(), nums.end());

    cout << "Sorted squares: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
