class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int maxi=nums[0];
        for(int i=0;i<n;i++){
            int pro=1;
            for(int j=i;j<n;j++){
                pro=pro*nums[j];
                maxi=max(pro,maxi);
            }
        }
        return maxi;
    }
};