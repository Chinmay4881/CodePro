class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //int n= nums.size();
        vector<int> last;
        unordered_map<int,int>f_map;
        for(int x:nums){
            f_map[x]++;
        }
        for(auto const &pair:f_map){
            if(pair.second>nums.size()/3){
               last.push_back(pair.first);
            }
        }
        return last;
    }
};
