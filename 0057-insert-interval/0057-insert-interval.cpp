class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        int i=0;
        int n=intervals.size();

        vector<vector<int>> ans;

        //phase 1: when element are not overlapping 
        while(i<n && newInterval[0]>intervals[i][1]){
            //old interval < new interval
            ans.push_back(intervals[i]);
            i++;
        }

        //phase 2: when overlaping interval is found
        while(i<n && newInterval[1]>=intervals[i][0]){
            newInterval[0]=min(newInterval[0],intervals[i][0]);
            newInterval[1]=max(newInterval[1],intervals[i][1]);
            i++;
        }

        ans.push_back({newInterval[0],newInterval[1]});

        //phase 3: if the remaining element is left even after the overlapping
        while(i<n){
            ans.push_back(intervals[i]);
            i++;
        }

        return ans;
        
    }
};