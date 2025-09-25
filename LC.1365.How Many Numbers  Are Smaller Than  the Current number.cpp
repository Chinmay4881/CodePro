class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        vector<int>no;
        for(int i=0;i<n;i++){
           // sort(nums.begin(),nums.end());
           int count =0;
           for(int j=0;j<n;j++){
                if(nums[i] >nums[j]){
                    count++;
                   
                }
            }
             no.push_back(count);

        }
        return no;
    }
};
