class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        sort(intervals.begin(),intervals.end());

        vector<vector<int>> ans;

        ans.push_back(intervals[0]);

       

        

        for(int i=1;i<intervals.size();i++){
            int start=intervals[i][0];
            int end=intervals[i][1];


            if(ans.back()[1]>=start){
                //merge
                int new_start=min(ans.back()[0],start);
               
                int new_end=max(ans.back()[1],end);

                
                ans.back()[0]=new_start;
                ans.back()[1]=new_end;
            }
            else{
                ans.push_back(intervals[i]);
            }
            
        }

        return ans;




        

     
                 



            

           



        

    }
};