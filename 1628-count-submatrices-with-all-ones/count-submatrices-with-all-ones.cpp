class Solution {
public:
int func(vector<int>&vec){
    int count=0;
    int subcount=0;
    for(int i=0;i<vec.size();i++){
        if(vec[i]==0)count=0;
        else{
            count++;
           
        }
         subcount+=count;
    }
    return subcount;
}
    int numSubmat(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int result=0;
        for(int i=0;i<m;i++){
               vector<int>vec(n,1);
            for(int j=i;j<m;j++){
             
                for(int k=0;k<n;k++){
                    vec[k]=vec[k]&mat[j][k];
                }
                result+=func(vec);
        }
        }
        return result;
    }
};