class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=0;
        int med=nums[n/2];
        for(auto & it:nums){
            ans+=abs(it-med);
        }
        return ans;
    }
};