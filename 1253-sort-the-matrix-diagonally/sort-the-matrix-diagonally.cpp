class Solution {
public:
void sortdiaganol(int row,int col,vector<vector<int>>& mat){
    int m=mat.size();
    int n=mat[0].size();
    int  i=row;
    int j=col;
    vector<int>vec;
    while(i<m && j<n){
        vec.push_back(mat[i][j]);
        i++;
        j++;
    }
    sort(vec.begin(),vec.end());
    int i1=row;
    int j1=col;
    for(int & val:vec){
        mat[i1][j1]=val;
        i1++;
        j1++;

    }
}
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
      //  bool ascending=true;
        for(int row=0;row<m;row++){
            sortdiaganol(row,0,mat);
        }
        for(int col=1;col<n;col++){
            sortdiaganol(0,col,mat);
        }
        return mat;
    }
};