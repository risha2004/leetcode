class Solution {
public:
   
        
        
        
        
          void gen(int n, int open, int close, string s, vector<string>& res)
          {
       
        if (open == n && close == n) 
        {
            res.push_back(s);
            return;
        }

       
        if (open < n) {
            gen(n, open + 1, close, s + '(', res);
        }

      
        if (close < open) {
            gen(n, open, close + 1, s + ')', res);
        }
    }

    vector<string> generateParenthesis(int n)
    {
        vector<string> res;
        string s = "";
        gen(n, 0, 0, s, res);  // Start the recursive function
        return res;
    
        
        
        
        
        
        
        
    }
};