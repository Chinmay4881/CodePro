class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>f_map;
        for(auto x:nums){
        f_map[x]++;
        }
        sort(nums.begin(),nums.end(),[&](int a,int b){
            if(f_map[a]==f_map[b]){
                return a>b;
            }
            else{
                return f_map[a] < f_map[b];
            }
        });
        return nums;
    }
};
