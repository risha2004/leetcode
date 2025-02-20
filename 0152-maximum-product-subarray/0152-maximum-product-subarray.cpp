class Solution {
public:
    int maxProduct(vector<int>& nums) {
      int result = *max_element(nums.begin(), nums.end());
      int curr_max = 1, curr_min = 1;

      for( int n : nums){
        int temp = curr_max *n ;
        curr_max = max({temp, curr_min  * n , n});
        curr_min = min({temp, curr_min  * n , n});

        result = max(result, curr_max);
      }  
           return result;
    }
  
};