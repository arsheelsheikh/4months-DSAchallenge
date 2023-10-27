class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t reversed = 0;
        int bitCount = 32;

        while (bitCount > 0) {
            reversed <<= 1; 
            reversed |= n & 1; 
            n >>= 1; 
            bitCount--;
        }

        return reversed;
    }
};
