class Solution {
public:
    int fun(int stairNo , vector<int>& dp){
        if(stairNo<=1){
            return 1;
        }

        if(dp[stairNo]!=0){
            return dp[stairNo];
        }

        dp[stairNo]=fun(stairNo-1,dp)+fun(stairNo-2,dp);

        return dp[stairNo];
    }
    int climbStairs(int n) {
      vector<int> dp(n+1,0);

      return fun(n,dp);

    }
};