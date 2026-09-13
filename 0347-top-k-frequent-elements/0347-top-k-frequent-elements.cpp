class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        map<int,int> m;

        for(auto it: nums){
            m[it]++;
        }

        priority_queue<pair<int,int>> q;

        for(auto it: m){
            q.push({it.second, it.first});
        }

        vector<int> ans;

        int count = 0;
        while(!q.empty() && count < k){
            ans.push_back(q.top().second);
            q.pop();
            count++;
        }

        return ans;





    }
};