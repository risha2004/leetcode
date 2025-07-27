class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int mini = prices[0];
    int maxprof = 0;
    for(int i = 1 ; i< prices.size() ; i++){
        int cost = prices[i] - mini;
        maxprof = max(maxprof, cost);
        mini = min(mini, prices[i]);
    }
    return maxprof;
    }

};