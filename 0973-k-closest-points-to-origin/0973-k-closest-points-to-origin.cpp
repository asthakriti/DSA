class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        priority_queue<pair<double,vector<int>>> max_heap;

        for(auto point:points){

            int x=point[0];
            int y=point[1];

            double dis= sqrt(pow(x,2)+pow(y,2));

            max_heap.push({dis,point});

            if(max_heap.size()>k) max_heap.pop();
        }

        vector<vector<int>> ans;

        while(!max_heap.empty()){
            ans.push_back(max_heap.top().second);
            max_heap.pop();
        }

        return ans;
    }
};