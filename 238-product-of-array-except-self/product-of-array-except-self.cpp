class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        ans[0]=1;
        for(int i=1;i<n;i++){
            ans[i]=ans[i-1]*nums[i-1];
        }
        vector<int>right(n);
      right[n-1]=1;
      for(int i=n-2;i>=0;i--){
        right[i]=right[i+1]*nums[i+1];
      }
      vector<int>result(n);
      for(int i=0;i<n;i++){
        result[i]=ans[i]*right[i];
      }
      return result;
    }
};