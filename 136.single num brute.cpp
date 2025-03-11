class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>f_map;
        for(int x:nums){
            f_map[x]++;
        }
        for(auto const &pair:f_map){
            if(pair.second<2){
                return pair.first;
            }
        }
        return 0;
    }
};