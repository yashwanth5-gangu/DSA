class Solution {
public:
    int captureForts(vector<int>& forts) {
        vector<int>ans;
        int count=0;
        for(int i=0;i<forts.size();i++){
            if(forts[i]==0)continue;
            else{
                if(forts[i]==1)count++;
                  ans.push_back(i);
            }

        }
        if(count==0)return 0;
    int maxi=0;
        for(int i=0;i<ans.size()-1;i++){
            int t=forts[ans[i]];
            int y=forts[ans[i+1]];
            if(t+y==0){
         maxi=max(maxi,abs(ans[i+1]-ans[i]-1));
            }
                
            }
        return maxi;
    }
};