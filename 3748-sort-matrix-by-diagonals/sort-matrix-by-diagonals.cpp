class Solution {
public:
void sortdiagonal(int row,int col,vector<vector<int>>& grid,bool ascending){
    int i=row;
    int j=col;
    int n=grid.size();
    vector<int>vec;
    while(i<n && j<n){
     vec.push_back(grid[i][j]);
     i++;
     j++;
    }
    if(ascending==true){
           sort(vec.begin(),vec.end());
    }
    else{
        sort(vec.begin(),vec.end(),greater<int>());
    }
    int i1=row;
    int j1=col;
    for(int &val :vec){
          grid[i1][j1]=val;
          i1++;
          j1++;
    }
}
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        bool ascending=true;
        for(int row=0;row<n;row++){
            sortdiagonal(row,0,grid,ascending=false);
        }
        for(int col=1;col<n;col++){
            sortdiagonal(0,col,grid,ascending=true);
        }
        return grid;
    }
};