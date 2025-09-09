class Solution {
   
    public int peopleAwareOfSecret(int n, int delay, int forget) {
        long[] dp=new long[n+1];
        dp[1]=1;
        long  share=0;
         long mod=(long)1e9+7;
        for(int i=2;i<=n;i++){
            if(i-delay>0){
            share=(share+dp[i-delay])%mod;
        }
        if(i-forget>0){
             share=(share-dp[i-forget]+mod)%mod;

        }
        dp[i]=share;

    }
    long  know=0;
     for(int i=n-forget+1;i<=n;i++){
        know=(know+dp[i])%mod;
    }
    return (int)know;
}
}