class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        set<vector<int>> st;
      
      for(int i=0;i<nums.size();i++){
        unordered_set<int> seen;
        if (i > 0 && nums[i] == nums[i-1]) continue;
        for(int j=i+1;j<nums.size();j++){
            int b=-nums[i]-nums[j];

            if(seen.count(b)){
                vector<int> temp({nums[i],nums[j],b});
                st.insert(temp);
            }

            seen.insert(nums[j]);
        }
      }

      vector<vector<int>> ans(st.begin(),st.end());
      return ans;
      
    }
};