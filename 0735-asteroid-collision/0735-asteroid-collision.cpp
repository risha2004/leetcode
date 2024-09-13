class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        
       int n=asteroids.size();
        stack<int>st;
        for(int i=0;i<n;i++)
            if(asteroids[i]>0 || st.empty())
                st.push(asteroids[i]);
            else
            {
                while(!st.empty() && st.top()>0 && st.top()<abs(asteroids[i]))
                      st.pop();
                if(!st.empty() && st.top()==abs(asteroids[i]))
                   st.pop();
                else if(st.empty()||st.top()<0)
                    st.push(asteroids[i]);
            }
            vector<int>res;
            while(!st.empty())
            {
                res.push_back(st.top());
                st.pop();
            }
            reverse(res.begin(),res.end());
        return res;
         
    }   
        
        
        
        
        
        
        
        
    
};