class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int sum=nums[i];
            for(int j=i;j<n;j++){
                sum=lcm(sum,nums[j]);
                if(sum>k)break;
                if(sum==k)ans++;
            }
    }
        return ans;
    }
};