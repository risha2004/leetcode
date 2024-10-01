class Solution {
public:
    vector<int> diffWaysToCompute(string expression) {
      vector<int> res;
        for(int index = 0; index < expression.length(); index++) {
            char ch = expression[index];
            if(ch == '+' || ch == '-' || ch == '*') {
                string leftPart = expression.substr(0, index);
                string rightPart = expression.substr(index + 1);
                vector<int> leftList = diffWaysToCompute(leftPart);
                vector<int> rightList = diffWaysToCompute(rightPart);
                for(int l : leftList) {
                for(int r : rightList) {
                    if(ch == '+') {
                        res.push_back(l + r);
                        } else if(ch == '-') {
                            res.push_back(l - r);
                        } else if(ch == '*') {
                            res.push_back(l * r);
                        }
                    }
                }
            }
        }
        if(res.empty()) res.push_back(stoi(expression));
        return res;
      
    }
};