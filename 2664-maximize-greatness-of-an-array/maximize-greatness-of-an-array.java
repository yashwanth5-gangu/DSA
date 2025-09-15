class Solution {
    public int maximizeGreatness(int[] nums) {
        Arrays.sort(nums);
        int l=0;
        int r=0;
        int ans=0;
        while(r<nums.length){
           if(nums[r]>nums[l]){
            ans++;
            r++;
            l++;
           }
           else{
            r++;
           }
        }
      
        return ans;
    }
}