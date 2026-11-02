class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int prefix_sum=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        int cnt=0;

        for(int j=0;j<nums.size();j++){
            prefix_sum +=  nums[j];

            int x=prefix_sum-k;

            if(mp.find(x)!=mp.end()){
                cnt+=mp[x];
            }

            

            mp[prefix_sum]++;

        }

        return cnt;
    }
};


