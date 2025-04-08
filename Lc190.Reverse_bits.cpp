class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
       string nova = bitset<32>(n).to_string();
       reverse(nova.begin(),nova.end());
     return   bitset<32>(nova).to_ulong();

    }
};
