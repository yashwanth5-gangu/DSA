class Solution {
    public static int func(int j,int n,int[]nums,int target){
           int l=j;
           int r=n;
           int count=-1;
           while(l<=r){
            int mid=l+(r-l)/2;

             if(target>nums[mid]){
                count=mid;
                l=mid+1;
             }
             else{
                r=mid-1;
             }
           }
           return count;

    }
    public int triangleNumber(int[] nums) {
        Arrays.sort(nums);
        int ans=0;
        for(int i=0;i<nums.length;i++){
            for(int j=i+1;j<nums.length;j++){
                 int target=nums[i]+nums[j];
                 int t=func(j+1,nums.length-1,nums,target);
                 if(t!=-1){
                 ans+=t-j;    
                 }        
            }
        }
        return ans;
    }
}