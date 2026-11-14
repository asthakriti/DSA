class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int cnt=0;

        unordered_map<int,int>mp;
        mp[0]=1;

        int pre_sum=0;

       for(int i=0;i<nums.size();i++){

        pre_sum+=nums[i];

        int x=pre_sum-k;

        if(mp.find(x)!=mp.end()){
            cnt+=mp[x];
        }

        mp[pre_sum]++;
       }

       return cnt;
    }
};


