class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
    unordered_map<int,int>mpp;
    for(auto & x : nums)
        mpp[x]++;
    for(auto& [key,val] : mpp)
        if(val == 1)
        return key;

    return -1;


    }
};