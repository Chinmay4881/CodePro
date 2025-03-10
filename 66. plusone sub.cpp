class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
     int num=0;
     for(int x:digits){
        num=num*10+x;
     }
     if (num == 0) return {1}; 
    num=num+1;
    //cout<<num;
    digits.clear();
    while (num > 0) {
        digits.push_back(num % 10); 
        num /= 10; 
    }
    
   reverse(digits.begin(), digits.end()); 
    return digits;
}
    
};