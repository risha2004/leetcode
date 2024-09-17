class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
      
        
           int l=0;
        int r=1000000001;
        while(l<r){
            int mid=(l+r)/2;
            int i=0;
            int count=0;
            while(i<nums.size()){
                if(count==k || nums[i]>mid){
                    l=mid+1;
                    break;
                }
                int sums=0;
                while(i<nums.size()){
                    sums+=nums[i];
                    if(sums>mid)
                        break;
                    else
                        i++;
                }
                count++;
            }
            if(i==nums.size())
                r=mid;
        }
        return r;
    
        
        
        
        
        
        
        
        
        
        
        
        
    }
};