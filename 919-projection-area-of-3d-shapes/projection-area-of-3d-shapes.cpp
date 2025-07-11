class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int n=grid.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int maxrow=0;
            int maxcol=0;
            for(int j=0;j<n;j++){
                if(grid[i][j]>0)ans++;
                maxrow=max(maxrow,grid[i][j]);
                maxcol=max(maxcol,grid[j][i]);
            }
            ans+=maxrow+maxcol;
        }
        return ans;
    }
};