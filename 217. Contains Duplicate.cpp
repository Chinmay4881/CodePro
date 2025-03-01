
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>f_map;
        for(int num:nums){
            f_map[num]++;
        }
        int  max_element =0, max_freq=0;
        for(const auto&pair : f_map ){
            if(pair.second >max_freq){
                max_freq=pair.second;
                max_element=pair.first;

            }
          
        }
           return max_element;
            
    }
    int main(){
          int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
     cout<<majorityElement(nums);
     return 0;
    }