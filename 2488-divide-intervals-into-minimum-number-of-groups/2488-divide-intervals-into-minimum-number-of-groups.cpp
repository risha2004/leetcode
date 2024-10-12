class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        
          vector<int> start, end;

   
        for (const auto& interval : intervals) {
            start.push_back(interval[0]);
            end.push_back(interval[1]);
        }

    
        sort(start.begin(), start.end());
        sort(end.begin(), end.end());

        int end_ptr = 0, group_count = 0;

      
        for (int starts : start) {
            if (starts > end[end_ptr]) {
                end_ptr++;
            } else {
                group_count++;
            }
        }

        return group_count;
    }
};