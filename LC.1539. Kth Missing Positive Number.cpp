
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int current = 1;  
        int i = 0;        
        
        while (true) {
            if (i < n && arr[i] == current) {
                i++; 
            } else {
                k--; 
                if (k == 0) return current;
            }
            current++;
        }
        return -1;
    }
};
