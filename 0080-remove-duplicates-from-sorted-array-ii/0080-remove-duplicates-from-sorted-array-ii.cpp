class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    if(n < 3) 
    return n;

    int s =2;
    for(int f =s ; f< n; f++)
    {
        if(nums[f]  != nums[s-2]){
            nums[s++]= nums[f];
        }
    }
    return s;
    }
};