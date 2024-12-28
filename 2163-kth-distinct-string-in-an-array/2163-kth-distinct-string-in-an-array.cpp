class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int distinctCount_ = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (isDistinct(arr, i)) {
                distinctCount_++;
                if (distinctCount_ == k) {
                    return arr[i];
                }
            }
        }
        return "";
    }

private:
    bool isDistinct(vector<string>& arr, int index) {
        return count(arr.begin(), arr.end(), arr[index]) == 1;
    }
};