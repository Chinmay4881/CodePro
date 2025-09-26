class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n;i++){
            int mo=0;
            if(arr[i+1]<arr[i] && arr[i-1]<arr[i]){
                return i;
            }
        }
        return -1;
    }
};
