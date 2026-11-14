class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int> mp;

        for(auto num:nums){
            mp[num]++;
        }

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minheap;

        for(auto it:mp){
            minheap.push({it.second,it.first});

            if(minheap.size()>k) minheap.pop();
        }

        vector<int> ans;

        while(!minheap.empty()){
            ans.push_back(minheap.top().second);
            minheap.pop();
        }

        return ans;
        

    }
};