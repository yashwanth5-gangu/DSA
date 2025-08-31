class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        vector<pair<int,int>>ans;
        for(int i=0;i<ages.size();i++){
            ans.push_back({ages[i],scores[i]});
        }
        sort(ans.begin(),ans.end());
        int n=ages.size();
        vector<int>dp(n,0);
        int ans1=0;
        for(int i=0;i<ans.size();i++){
            for(int j=i;j>=0;j--){
                if(ans[i].second>=ans[j].second){
                    dp[i]=max(dp[i],dp[j]+ans[i].second);
                }
                ans1=max(ans1,dp[i]);
            }
        }
        return ans1;
    }
};