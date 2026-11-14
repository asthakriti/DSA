class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> ans;

        int n=nums.size();

        sort(nums.begin(),nums.end());

        for(int a=0;a<nums.size();a++){

            int left=a+1;
            int right=n-1;

            if(a>0 && nums[a]==nums[a-1]) continue;

            while(left<right){

                int sum=nums[a]+nums[left]+nums[right];

                if(sum<0) left++;

                else if(sum>0) right--;

                else{

                    //sum==0
                    //got the triplet

                    ans.push_back({nums[a],nums[left],nums[right]});
                    left++;right--;

                    while(left<right && nums[left]==nums[left-1]) left++;
                    while(left<right && nums[right]==nums[right+1]) right--;
                }
            }
        }

        return ans;

      
    }
};