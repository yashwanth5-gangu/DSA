class Solution {
    public int largestPerimeter(int[] nums) {
        int ans=0;
        int n=nums.length;
        Arrays.sort(nums);
        for(int i=n-1;i>=2;i--){
            int t=nums[i];
            int t1=nums[i-1];
            int t2=nums[i-2];
                   
            if(t+t1>t2 && t+t2>t1 && t1+t2>t){
                return t+t1+t2;
            }
                
            
        }
        return 0;
    }
}