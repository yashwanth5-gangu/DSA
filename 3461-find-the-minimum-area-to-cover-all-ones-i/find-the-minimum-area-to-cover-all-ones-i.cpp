class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int maxicol=0;
        int minicol=n;
        int maxirow=0;
        int minirow=m;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    minirow=min(minirow,i);
                    maxirow=max(maxirow,i);
                    
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[j][i]==1){
                    minicol=min(minicol,i);
                    maxicol=max(maxicol,i);
                    
                }
            }
        }
        int t=maxicol-minicol+1;
        int y=maxirow-minirow+1;
        return t*y;
    }
};