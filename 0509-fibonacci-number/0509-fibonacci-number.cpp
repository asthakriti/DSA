class Solution {
public:

   int fun(int n, vector<int>& dp){
        //base cond
        if(n<=1) return n;

        if(dp[n]!=0) return dp[n];

        dp[n]=fun(n-1,dp)+fun(n-2,dp);

        return dp[n];
    }
    int fib(int n) {

      vector<int> arr(n+1,0);

      return fun(n,arr);
        
    }
};