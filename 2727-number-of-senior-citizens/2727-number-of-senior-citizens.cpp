class Solution {
public:
    int countSeniors(vector<string>& details) {
    int answer = 0;
    for(auto& x : details){
        int age_ = stoi(x.substr(11,2));
        answer += age_ > 60;

    } 
    return answer;
    }
};