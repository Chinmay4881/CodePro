#include <iostream>
#include <vector>

using namespace std;

int missingNumber(vector<int>& nums) {
   int n = nums.size();
   int exp_sum = n * (n + 1) / 2;
   int act_sum = 0;
   for (int i : nums) {
       act_sum += i;
   }
   return exp_sum - act_sum;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << "Missing number: " << missingNumber(nums) << endl;
    return 0;
}
