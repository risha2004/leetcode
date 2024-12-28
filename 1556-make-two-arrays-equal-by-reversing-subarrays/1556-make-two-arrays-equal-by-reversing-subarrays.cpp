class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        map<int,int>mpp1;
        map<int,int>mpp2;
        for(auto &x : target) {
            mpp1[x]++;

        }
        for(auto &x : arr){
            mpp2[x]++;
        }
        auto it2 = mpp2.begin();
        for(auto & it1 : mpp1){
            if(it1.first != it2->first || it1.second != it2->second) return false;
            it2++;
        }
        return true;
    }
};