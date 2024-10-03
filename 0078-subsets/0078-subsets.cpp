class Solution {
 private:
    void f(int i,vector<int> &nums,vector<int> &tmp,vector<vector<int>> &ans){
        if(i<0){
            ans.push_back(tmp); return;
        }

        tmp.push_back(nums[i]);
        f(i-1,nums,tmp,ans);
        tmp.pop_back();
        f(i-1,nums,tmp,ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> tmp;
        f(nums.size()-1,nums,tmp,ans);

        return ans;
    }
};