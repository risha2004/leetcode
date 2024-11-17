class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        int result = INT_MAX;
        long long curSum = 0;
        deque<pair<long long, int>> q;   
        
        for (int r = 0; r < nums.size(); r++) {
            curSum += nums[r];
            
            if (curSum >= k) {
                result = min(result, r + 1);
            }
            
            while (!q.empty() && curSum - q.front().first >= k) {
                auto [prefix, endIdx] = q.front();
                q.pop_front();
                result = min(result, r - endIdx);
            }
            
            // Validate the monotonic deque
            while (!q.empty() && q.back().first > curSum) {
                q.pop_back();
            }
            q.push_back({curSum, r});
        }
        
        return result == INT_MAX ? -1 : result;
    }
};