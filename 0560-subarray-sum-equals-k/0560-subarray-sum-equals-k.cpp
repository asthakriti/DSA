class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {

        unordered_map<int,int>mp;
        mp[0]=1;
        int cnt=0;
        int sum=0;

        for(int i=0;i<arr.size();i++){
            sum+=arr[i]; //prefix sum
            int x=sum-k;

            if(mp.find(x) != mp.end()){
                //store the answer here only
                cnt+=mp[x];
            }
            mp[sum]++;
        }

        return cnt;
    }
};


