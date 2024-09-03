class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        unordered_map<int, int> elementCntMap;
        
       
        for(int i = 0; i < nums.size(); i++) {
            elementCntMap[nums[i]]++;
        }
        
        vector<int> majorityElements;
        int threshold = nums.size() / 3;
        
        
        for(auto elementCntPair : elementCntMap) {
            int element = elementCntPair.first;
            int count = elementCntPair.second;
            
           
            if(count > threshold) {
                majorityElements.push_back(element);
            }
        }
        
        return majorityElements; 
    }
};