class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
        
 int maxi=*max_element(nums.begin(),nums.end());
        int temp=0;
        int ans=1;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==maxi) temp++;
            else temp=0;
            ans=max(ans,temp);
        }
        return ans;
    } 
        
        
        
        
    
};