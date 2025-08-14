class Solution {
public:
    string optimalDivision(vector<int>& nums) {
        string ans;
        int n=nums.size();
        if(n==1)return to_string(nums[0]);
        if(n==2)return to_string(nums[0])+"/"+to_string(nums[1]);
        for(int i=0;i<n-1;i++){
            ans+=to_string(nums[i])+"/";
            if(i==0){
                ans+="(";
            }
        }
        ans+=to_string(nums[n-1])+")";
        return ans;
    }
};