class Solution {
public:
 int  func(int i,int j,int m,int n,vector<vector<int>>&grid,vector<vector<int>>&dp){
        if(i==m-1 && j==n-1){
            return grid[i][j];
        }
        if(dp[i][j]!=INT_MAX){
            return dp[i][j];
        }
       else if(i==m-1){
            return dp[i][j]=grid[i][j]+func(i,j+1,m,n,grid,dp);
        }
       else if(j==n-1){
            return dp[i][j]=grid[i][j]+func(i+1,j,m,n,grid,dp);
        }
        else{
            return dp[i][j]=grid[i][j]+min(func(i,j+1,m,n,grid,dp),func(i+1,j,m,n,grid,dp));
        }
   }
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>dp(m,vector(n,INT_MAX));
        return func(0,0,m,n,grid,dp);
        
    }
};