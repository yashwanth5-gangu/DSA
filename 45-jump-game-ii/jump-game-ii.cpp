class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=0;
        int jumps=0;
        while(r<n-1
        ){
            int farthest=0;
            for(int l=0;l<=r;l++){
                farthest=max(farthest,l+nums[l]);
            }
            l=r+1;
            r=farthest;
            jumps++;
        }
        return jumps;
    }
};