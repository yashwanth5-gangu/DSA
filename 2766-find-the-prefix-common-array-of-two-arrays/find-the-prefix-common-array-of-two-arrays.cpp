class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        map<int,int>mpp;
        vector<int>ans;
          int count=0;
        for(int i=0;i<A.size();i++){
          
           mpp[A[i]]++;
           if(mpp[A[i]]==2)count++;
           mpp[B[i]]++;
           if(mpp[B[i]]==2)count++;
            ans.push_back(count);
        }
        return ans;
    }
};