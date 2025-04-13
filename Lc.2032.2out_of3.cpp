class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        set<int> set1(nums1.begin(), nums1.end());
    set<int> set2(nums2.begin(), nums2.end());
    set<int> set3(nums3.begin(), nums3.end());

    map<int, int> count;

    for (int num : set1) count[num]++;
    for (int num : set2) count[num]++;
    for (int num : set3) count[num]++;

    vector<int> result;
    for (auto& [num, cnt] : count) {
        if (cnt >= 2) result.push_back(num);
    }

    return result;
        
    }
};
