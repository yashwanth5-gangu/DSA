class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int>dp(n+1);
        dp[1]=1;
        int i2=1;
        int i3=1;
        int i5=1;
        for(int i=2;i<=n;i++){
            int i2ugly=dp[i2]*2;
            int i3ugly=dp[i3]*3;
            int i5ugly=dp[i5]*5;
             dp[i]=min(i2ugly,min(i3ugly,i5ugly));
            if(dp[i]==i2ugly) i2++;
            if(dp[i]==i3ugly) i3++;
            if(dp[i]==i5ugly)  i5++;
        }
        return dp[n];
    }
};