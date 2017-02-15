/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    
    vector<Interval> merge(vector<Interval>& intervals) {
        vector<Interval> res;
        if(intervals.size()==0) return res;
        sort(intervals.begin(),intervals.end(),[](Interval a,Interval b) {return a.start<b.start;});
        int i=0;
        while(i+1<intervals.size()) {
            if (intervals[i].end>=intervals[i+1].start) {
                intervals[i+1].start=intervals[i].start;
                intervals[i+1].end=max(intervals[i].end,intervals[i+1].end);
                i++;
            }
            else{
                res.push_back(intervals[i]);
                i++;
            }
        }
        res.push_back(intervals[i]);
        return res;
    }
};
