class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int start1 = intervals[0][0];
        int end1 = intervals[0][1];
        int n = intervals.size();
        int cnt = 0;
        for(int i=1; i<n; i++){
            int start2 = intervals[i][0];
            int end2 = intervals[i][1];
            if(start2 >= end1){
                end1 = end2;
            }else{
                cnt++;
                end1 = min(end1, end2);
            }
                 
        }
        return cnt;
    }
};
