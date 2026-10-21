class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& interval) {

        vector<vector<int>> ans;
        sort(interval.begin(),interval.end());
        
        ans.push_back(interval[0]);

        for(int i=1;i<interval.size();i++){
            if(ans.back()[1]>=interval[i][0]){
                ans.back()[1]=max(ans.back()[1],interval[i][1]);
            }

            else{
                ans.push_back(interval[i]);
            }
        }

        return ans;




        

     
                 



            

           



        

    }
};