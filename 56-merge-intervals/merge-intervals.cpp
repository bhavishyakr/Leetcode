class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        for(int i=0; i<intervals.size(); i++){
            int st = intervals[i][0];
            int end = intervals[i][1];
            while(i+1 < intervals.size() && end >= intervals[i+1][0]){
                end = max(intervals[i+1][1], end);
                i++;
            }
            ans.push_back({st,end});
            
        }
        return ans;
    }
};