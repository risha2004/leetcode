class Solution {
public:
    int minBitFlips(int start, int goal) {
        
       int xor_value = start ^ goal;
        int result = 0;
        while (xor_value > 0) {
            result += xor_value & 1; 
            xor_value >>= 1;        
        }
        
        return result;
       
    }
};