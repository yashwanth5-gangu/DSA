class Solution {
    public void moveZeroes(int[] nums) {
        List<Integer>li=new ArrayList<>();
        for(int i=0;i<nums.length;i++){
            if(nums[i]!=0){
                li.add(nums[i]);
            }
        }
        int[] arr=new int[nums.length];
        for(int i=0;i<li.size();i++){
            nums[i]=li.get(i);
        }
        for(int i=li.size();i<nums.length;i++){
            nums[i]=0;
        }
        
    }
}