class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
      int n = arr.size();
        vector<int> pre(n);
        vector<int> res(queries.size());

       
        pre[0] = arr[0];
        for (int i = 1; i < n; i++) {
            pre[i] = pre[i - 1] ^ arr[i];
        }

    
        for (int i = 0; i < queries.size(); i++) {
            int left = queries[i][0];
            int right = queries[i][1];
            if (left == 0) {
                res[i] = pre[right];
            } else {
                res[i] = pre[right] ^ pre[left - 1];
            }
        }

        return res;
    
        
        
    }
};