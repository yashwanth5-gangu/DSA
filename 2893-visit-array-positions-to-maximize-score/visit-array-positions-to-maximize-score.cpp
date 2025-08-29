class Solution {
public:
long long  func(vector<int>&nums,int parity,int x,int index,vector<vector<long long >>&dp){
    if(index==nums.size())return 0;
    if(dp[index][parity]!=-1)return dp[index][parity];
    long long pick=0;
    if(nums[index]%2==parity){
        pick=nums[index]+func(nums,parity,x,index+1,dp);
    }
    else{
        pick=nums[index]-x+func(nums,!parity,x,index+1,dp);
    }
    long long notpick=func(nums,parity,x,index+1,dp);
    return dp[index][parity]=max(pick,notpick);

}
    long long maxScore(vector<int>& nums, int x) {
        int n=nums.size();
        vector<vector<long long >>dp(n,vector<long long >(2,-1));
   return func(nums,nums[0]%2,x,0,dp);
    }
};