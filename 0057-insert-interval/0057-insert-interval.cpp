class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int new_start=newInterval[0];
        int new_end=newInterval[1];

        int i=0;
        int n=intervals.size();

        vector<vector<int>> ans;

        //phase 1: when element are not overlapping 
        while(i<n && new_start>intervals[i][1]){
            //old interval < new interval
            ans.push_back(intervals[i]);
            i++;
        }

        //phase 2: when overlaping interval is found
        while(i<n && new_end>=intervals[i][0]){
            new_start=min(new_start,intervals[i][0]);
            new_end=max(new_end,intervals[i][1]);
            i++;
        }

        ans.push_back({new_start,new_end});

        //phase 3: if the remaining element is left even after the overlapping
        while(i<n){
            ans.push_back(intervals[i]);
            i++;
        }

        return ans;
        
    }
};