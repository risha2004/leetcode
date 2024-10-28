class Solution {
public:
    unordered_map<long long,long long>m;
    int dfs(long long current){
        if(m.find(current)==m.end()) return 0;
        else return 1+ dfs(current*current);
    }
    int longestSquareStreak(vector<int>& nums) {
        int maxi=0;
        for(auto i : nums) m[i]=(long long)i*i;
        for(auto i : nums){
            if(m.find((long long)i*i)!=m.end()){ 
                int n=1+dfs(i*i);
                maxi=max(n,maxi);
            }
        }
        return maxi<2 ? -1 : maxi;
    }
};