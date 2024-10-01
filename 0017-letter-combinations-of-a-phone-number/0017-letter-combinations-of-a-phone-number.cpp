class Solution {
private:
    vector<string> answ;
    int n;
    string ex;

    void backtracking(short index, string &str, unordered_map<char, string> &mp){
        if(index == n){
            answ.push_back(str);
            return;
        }
            
        for (size_t i = 0; i < mp[ex[index]].size(); i++)
        {
            string temp = str;
            str+=mp[ex[index]][i];
            backtracking(index + 1, str, mp);
            str = temp;
        }
    }   


public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty())
            return {};
        
        unordered_map<char, string> mp = 
        {{'2', "abc"},{'3', "def"},{'4', "ghi"}, 
        {'5', "jkl"},{'6', "mno"},{'7', "pqrs"},
        {'8', "tuv"},{'9', "wxyz"}};
        n = digits.size();

        string s = "";
        ex = digits;
        backtracking(0, s, mp);
        return answ;
    }

};