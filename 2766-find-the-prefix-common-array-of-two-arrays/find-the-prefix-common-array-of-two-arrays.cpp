class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
int n=A.size();
        vector<int>a(n+1,0);
        vector<int>b(n+1,0);
        vector<int>ans;
        for(int i=0;i<n;i++){
            a[A[i]]++;
            b[B[i]]++;
            int count=0;
            for(int j=1;j<=n;j++){
                if(a[j]>0 && b[j]>0)count++;
            }
            ans.push_back(count);
        }
        return ans;
    }
};