class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int maxcount=0;
        int count=0;
       int maxi=*max_element(nums.begin(),nums.end());
       for(int i=0;i<n;i++){
        if(nums[i]==maxi)
        {
            count++;
           
              maxcount=max(count,maxcount);
        }
        else if(count>1 && nums[i]!=maxi && i<n) 
        {
            count=0;
        }
       }
       return maxcount;
    }
};