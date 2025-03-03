#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int missingNumber(vector<int>& nums) {
    vector<int> nums2;
    for (int i = 0; i <= nums.size(); i++) {
        nums2.push_back(i);
    }
    unordered_map<int, int> f_map;
    for (int x : nums) {
        f_map[x]++;
    }
    for (int x : nums2) {
        f_map[x]--;
        if (f_map[x] < 0) {
            return x;
        }
    }
    return 0;
}

int main() {
    vector<int> nums = {3, 0, 1};
    cout << missingNumber(nums) << endl;
    return 0;
}
