class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>f_map;
        vector<int>nova;
        for(int x:nums1){
            f_map[x]++;
        }
        for(int x:nums2){
            if(f_map[x]>0){
            nova.push_back(x);
               f_map[x]--;
                
            }
        }
        return nova;
    }
};
