class Solution {
public:
    int maximumSwap(int num) {
     
        string numStr = to_string(num);
        int n = numStr.size();
        
        //  last occurrence of each digit (0-9)
        vector<int> lastocc(10, -1);
        for (int i = 0; i < n; ++i) {
            lastocc[numStr[i] - '0'] = i;
        }
        
        // Traverse each digit from left to right
        for (int i = 0; i < n; ++i) {
            // Check if there's a larger digit appearing later
            for (int d = 9; d > numStr[i] - '0'; --d) {
                if (lastocc[d] > i) {
                    // Swap the current digit with the larger one
                    swap(numStr[i], numStr[lastocc[d]]);
                    return stoi(numStr); // Convert back to integer and return
                }
            }
        }
        
        // If no swap was made, return the original number
        return num;
    }
};