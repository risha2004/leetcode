class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     
      
            int n = s.length();
        int maxLen = 0;
        unordered_set<char> charSet;
        int l = 0;
        
        for (int r = 0; r < n; r++) {
            if (charSet.count(s[r]) == 0) {
                charSet.insert(s[r]);
                maxLen = max(maxLen, r - l + 1);
            } else {
                while (charSet.count(s[r])) {
                    charSet.erase(s[l]);
                    l++;
                }
                charSet.insert(s[r]);
            }
        }
        
        return maxLen;
    
        
        
        
        
        
        
        
        
        
        
        
    }
};