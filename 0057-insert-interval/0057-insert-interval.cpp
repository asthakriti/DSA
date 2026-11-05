class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
       
        vector<vector<int>>ans;


        int i=0;



        while(i<intervals.size()&&intervals[i][1]<newInterval[0]){
            //task finshed before the new task 
            //grp1
            ans.push_back(intervals[i]);
            i++;
        }

        //task still going when new task came[4,8]
        //merge it and make the task bigger
        while(i<intervals.size()&&intervals[i][1]>=newInterval[0]
            && intervals[i][0]<=newInterval[1]){
            newInterval[0]=min(intervals[i][0],newInterval[0]);
            newInterval[1]=max(intervals[i][1],newInterval[1]);

            
            i++;
        }

        ans.push_back({newInterval[0],newInterval[1]});

        while(i<intervals.size()){
            ans.push_back(intervals[i]);
            i++;
        }

        return ans;




        
    }
};