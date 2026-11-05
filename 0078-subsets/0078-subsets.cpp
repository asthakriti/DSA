class Solution {
public:

    vector<vector<int>> ans;

    void fun(int idx, vector<int>& store, vector<int>& nums,int n){
        //base cond

        
        if(idx==n){
            ans.push_back(store);
            return;
        }

        //pick 
        store.push_back(nums[idx]);
        fun(idx+1,store,nums,n);

        //not pick
        store.pop_back();
        fun(idx+1,store,nums,n);
    }
    vector<vector<int>> subsets(vector<int>& nums) {

        int n=nums.size();

        vector<int> store;


        fun(0,store,nums,n);

        return ans;
    }
};