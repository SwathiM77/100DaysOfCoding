class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        int n = intervals.size();
        for(int i=0;i<n;i++){
            int start = intervals[i][0];
            int end = intervals[i][1];
            if(ans.empty() || ans.back()[1] < start){
                ans.push_back(intervals[i]);
            }
            else{
                ans.back()[1] = max(ans.back()[1], end);
            }
            
            // if(!ans.empty() && end >= ans.back()[1]){
            //     end = max(intervals[i][1], end);
            // }
            // ans.push_back({start,end});
        }
        return ans;
    }
};