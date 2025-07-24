class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mpp;
       int l=0;
       int r=0;
       int maxi=0;
       int sum=0;
       while(r<n){
       
        mpp[nums[r]]++;
       
       
         while(mpp[nums[r]]>1){
             mpp[nums[l]]--;
             sum=sum-nums[l];
           // maxi=max(maxi,sum);
             l++;
        }
         sum=sum+nums[r];
        maxi=max(maxi,sum);
        r++;
       }
       return maxi;
    }
};