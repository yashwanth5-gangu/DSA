class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=0;
        int mask=0;
        int maxi=0;
        while(r<n){
            while((mask &nums[r])!=0){
                mask=mask^nums[l];
                l++;
            }
            maxi=max(maxi,r-l+1);
            mask=mask|nums[r];
            r++;
        }
        return maxi;
    }
};