class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
       
      sort(intervals.begin(),intervals.end(), [](vector<int>a, vector<int>b){
        return a[1]<b[1];
      });

      int pre_end=intervals[0][1];

      int cnt=0;

      for(int i=1;i<intervals.size();i++){
        int curr_start=intervals[i][0];

        if(pre_end>curr_start){
            cnt++;
            
        }
        else{
            pre_end=intervals[i][1];
        }
        
        

      }

      return cnt;
    }
};