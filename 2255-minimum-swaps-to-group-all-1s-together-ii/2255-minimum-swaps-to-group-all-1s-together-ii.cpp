class Solution {
public:
    int minSwaps(vector<int>& nums) {
      int n = nums.size();
      int countones_ = count (nums.begin(), nums.end(), 1);
      if(countones_ ==0) return 0;

      vector<int> extendednums_(nums.begin(), nums.end());
      extendednums_.insert(extendednums_.end(), nums.begin(), nums.end());

      int currentzereos_ = count(extendednums_.begin(), extendednums_.begin() + countones_, 0);
      int minzereos_ = currentzereos_;

      for(int i = countones_; i<extendednums_.size(); ++i){
        if(extendednums_[i] == 0) currentzereos_++;
        if(extendednums_[i-countones_] == 0) currentzereos_--;

       minzereos_ = min(minzereos_, currentzereos_);
      }  
      return minzereos_;
    }
};