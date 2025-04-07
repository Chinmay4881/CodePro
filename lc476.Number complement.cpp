#include <bitset>
using namespace std;

class Solution {
public:
    int findComplement(int num) {
        bitset<32> bits(num);
        bitset<32> flipped = ~bits;

        int highest = 31;
        while (highest >= 0 && !bits[highest]) {
            highest--;
        }

        int result = 0;
        for (int i = 0; i <= highest; ++i) {
            if (flipped[i]) {
                result |= (1 << i);
            }
        }

        return result;
    }
};
