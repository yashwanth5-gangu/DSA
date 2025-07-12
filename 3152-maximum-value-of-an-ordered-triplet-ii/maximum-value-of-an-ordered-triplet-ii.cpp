class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        vector<int>left(n),right(n);
        left[0]=nums[0];
        for(int i=1;i<n;i++){
            left[i]=max(left[i-1],nums[i]);
        }
        right[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            right[i]=max(right[i+1],nums[i]);
        }
        long long ans=0;
        for(int k=1;k<n-1;k++){
            ans=max(ans,(long long )(left[k-1]-nums[k])*right[k+1]);
        }
        return ans;
    }
};