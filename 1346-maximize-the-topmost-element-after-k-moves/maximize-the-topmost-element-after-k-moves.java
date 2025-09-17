class Solution {
    public int maximumTop(int[] nums, int k) {
        int n=nums.length;
        if(n==1 && k%2==1)return -1;
        if(n<k){
            int maxi=0;
            for(int i=0;i<n;i++){
                maxi=Math.max(maxi,nums[i]);
            }
            System.out.print(maxi);
            return maxi;
        }
        else{
            int maxi1=0;
            for(int i=0;i<n;i++){
                if(i<k-1){
                maxi1=Math.max(maxi1,nums[i]);
                }
                else{
                    break;
                }
            }
            if(n>k){
                int t=nums[k];
                return Math.max(maxi1,t);
            }
            else{
                return maxi1;
            }

        }
    
    }
}