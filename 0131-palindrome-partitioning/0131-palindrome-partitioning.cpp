class Solution {
public:
   
  bool isPalindrome(string s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }

    void solve(int index, vector<string>& ds, vector<vector<string>>& ans, string s) {
        if (index >= s.size()) {
            ans.push_back(ds);
            return;
        }

        for (int i = index; i < s.size(); i++) {
            if (isPalindrome(s, index, i)) {
                ds.push_back(s.substr(index, i - index + 1));
                solve(i + 1, ds, ans, s);
                ds.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<string> ds;
        vector<vector<string>> ans;
        solve(0, ds, ans, s);
        return ans;
    }


};