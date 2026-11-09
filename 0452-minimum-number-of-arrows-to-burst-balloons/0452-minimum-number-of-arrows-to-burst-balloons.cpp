class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {

        sort(points.begin(),points.end(), [](vector<int>& a, vector<int>& b){
            return a[1]<b[1];
        });

        int cnt=1;

        int pre_end=points[0][1];

        for(int i=1;i<points.size();i++){
            int start=points[i][0];

            if(pre_end<start){
                 pre_end=points[i][1];cnt++;
            }
            
           

            
        }

        return cnt;


    }
};