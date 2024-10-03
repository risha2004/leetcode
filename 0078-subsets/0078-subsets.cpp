class Solution {
 
  public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> path;
        f(nums, 0, path, ans);
        return ans;
    }
    
    void f(vector<int>& nums, int start, vector<int>& path, vector<vector<int>>& ans) {
        ans.push_back(path);
        for (int i = start; i < nums.size(); i++) {
            path.push_back(nums[i]);
            f(nums, i + 1, path, ans);
            path.pop_back();
        }
    }
};