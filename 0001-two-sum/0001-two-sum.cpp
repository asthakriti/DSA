class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> ans;
        unordered_map<int,int>mp;

        for(int i=0;i<nums.size();i++){

            int req=target-nums[i];
      
            if(mp.find(target-nums[i]) != mp.end()){
                ans.push_back(mp[req]);
                ans.push_back(i);
                return ans;
            }

            mp[nums[i]]=i;
        }

        return {-1,-1};}
};