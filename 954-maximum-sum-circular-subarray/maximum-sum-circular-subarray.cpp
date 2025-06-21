class Solution {
public:
int kadanemin(vector<int>&nums,int n){
    int sum=nums[0];
    int minsum=nums[0];
    for(int i=1;i<n;i++){
        sum=min(sum+nums[i],nums[i]);
        minsum=min(sum,minsum);
    }
    return minsum;
}
int kadanemax(vector<int>&nums,int n){
    int sum=nums[0];
    int maxsum=nums[0];
    for(int i=1;i<n;i++){
        sum=max(sum+nums[i],nums[i]);
        maxsum=max(sum,maxsum);
    }
    return maxsum;
}
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int s=accumulate(nums.begin(),nums.end(),0);
        int mini=kadanemin(nums,n);
        int maxi=kadanemax(nums,n);
        int curmax=s-mini;
        if(maxi>0){
            return max(curmax,maxi);
        }
        else {
            return maxi;
        }
    }
};