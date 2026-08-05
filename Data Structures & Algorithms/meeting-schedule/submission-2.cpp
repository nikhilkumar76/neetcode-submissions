class Solution {
public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        sort(intervals.begin(), intervals.end(),
     [](const Interval& a, const Interval& b) {
         return a.start < b.start;
     });
        bool flag = true;
        int start1 = intervals[0].start;
        int end1 = intervals[0].end;
        int n = intervals.size();
        for(int i=1; i<n; i++){
            int start2 = intervals[i].start;
            int end2 = intervals[i].end;
            if(start2 >= end1){
                end1 = max(end1, end2);
            }else{
                return false;
            }
                 
        }
        return flag;
    }
};
