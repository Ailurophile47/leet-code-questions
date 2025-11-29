class Solution {
public:
    int minBitFlips(int start, int goal) 
    {
        int x = start ^ goal;
        int count = 0;
        while (x) {
            count += (x & 1); // check last bit
            x >>= 1;          // shift right (binary divide by 2)
        }
        return count;
    }
};
