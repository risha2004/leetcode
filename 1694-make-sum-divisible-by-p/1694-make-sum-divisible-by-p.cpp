class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long long totalsum = accumulate(nums.begin(),nums.end(),0LL);

        int rema = totalsum % p;

        if(rema ==0) return 0;

        int n = nums.size();
        int minlen = n;
        int presum = 0;
        unordered_map<int,int> presums;
        presums[0] = -1;

        for(int i=0; i<n ; i++){
        presum = (presum + nums[i]) % p;
        int target = (presum - rema + p) % p;

        if(presums.find(target) != presums.end()){
            minlen = min(minlen, i - presums[target]);

        }
            presums[presum] = i;

      }


return minlen== n ? -1 : minlen;







    }
};