class Solution {
public:
    int arrangeCoins(int n) {
        return (int)(sqrt(n*8.0+1)-1)/2;
    }
};
