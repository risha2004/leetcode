class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
    vector<int> arr;
    for(int i = 0; i<n ; ++i){
        int prefix_ = 0;
        for(int j =i; j< n ; ++j){
            prefix_ += nums[j];
            arr.push_back(prefix_);
        }
    } 
    sort(arr.begin(), arr.end());
    int result_ =0;
    int MOD = 1000000007;
    for(int i = left -1; i<right; ++i){
        result_ = (result_ + arr[i]) % MOD;

    }
    return result_;
    }
};