class Solution {
public:
 

        unordered_map<int,int> freq;
        for (int x : nums) {
            freq[x]++; 
        }
        
        int n = nums.size();
        vector<vector<int>> bucket(n + 1);
        for (auto &p : freq) {
            bucket[p.second].push_back(p.first);
        }

        vector<int> result;
        for (int i = n; i >= 1 && result.size() < k; i--) {
            for (int num : bucket[i]) {
                result.push_back(num);
                if (result.size() == k) break;
            }
        }
        return result;
    }
};
