class Solution {
    
private:
    vector<int> ans;
    
    void solve(int i, int n){
       
        if(i > n)
        {
            return;
        }

        int current  = i; 
        ans.push_back(current);
        for(int i=0;i<=9;i++)
        {
            string temp = to_string(current) + to_string(i); 
            solve(stoi(temp),n);

          
        }
    }
    
    
public:
    vector<int> lexicalOrder(int n)
      
      {

        for(int i=1;i<=9;i++){
            solve(i,n);
        }

        return ans;
    }
    
};