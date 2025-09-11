class Solution {
public:
void solve(int i,int j ,int m,int n,vector<vector<int>>& grid,int sum,int & maxsum){
     if(i==m)return;
     if(j==n)return ;
     if(grid[i][j]==0)return;
     
    int curr=grid[i][j];
     sum+=curr;
     maxsum=max(maxsum,sum);
     grid[i][j]=0;
     if(i+1<m){
        solve(i+1,j,m,n,grid,sum,maxsum);
     }
     if(j+1<n){
        solve(i,j+1,m,n,grid,sum,maxsum);
     }
     if(i-1>=0){
        solve(i-1,j,m,n,grid,sum,maxsum);
     }
    if(j-1>=0){
        solve(i,j-1,m,n,grid,sum,maxsum);
    }
grid[i][j]=curr;


       


}
    int getMaximumGold(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int sum=0;
        int maxsum=0;
         for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0)continue;
                else{
                    solve(i,j,m,n,grid,sum,maxsum);
                }
            }
        }
        return maxsum;
        
   }
};