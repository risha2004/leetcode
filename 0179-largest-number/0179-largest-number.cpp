class Solution {
public:
  
      class cmp 
    {
        public:
        bool operator()(string &a, string & b)
        {
            return a + b < b + a;
        }
    };
    
    
    
    string largestNumber(vector<int>& nums) 
    {
        priority_queue<string, vector<string>, cmp> pq;
        for(auto val:nums)
        {
            string s = to_string(val);
            pq.push(s);
        }

        string answer;
        while(!pq.empty())
        {
            answer += pq.top();
            pq.pop();
        }
        return answer[0] == '0' ? "0" : answer;
    }
};