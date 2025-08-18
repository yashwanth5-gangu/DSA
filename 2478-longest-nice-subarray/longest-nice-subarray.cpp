class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int maxi=0;
        int n =nums.size();
        for(int i=0;i<n;i++){
            int mask=0;
            for(int j=i;j<n;j++){
                if((mask & nums[j])!=0)
                {

                 break;
                }
              maxi=max(maxi,j-i+1);
              mask=mask|nums[j];
            }
        }
        return maxi;
    }
};