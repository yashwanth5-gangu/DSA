class Solution {
public:
  int solve(int strat,int end,vector<vector<int>>&dp){
    if(strat>=end)return 0;
    if(dp[strat][end]!=-1){
        return dp[strat][end];
    }
    int maxi=INT_MAX;
    for(int i=strat;i<=end;i++){
     maxi=min(maxi,i+max(solve(strat,i-1,dp),solve(i+1,end,dp)));
    }
    return dp[strat][end]=maxi;
  }
    int getMoneyAmount(int n) {
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return solve(1,n,dp);
    }
};