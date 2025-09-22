class Solution {
    public int maxFrequencyElements(int[] nums) {
        Map<Integer,Integer>mpp= new HashMap<>();
        for(int i=0;i<nums.length;i++){
            mpp.put(nums[i],mpp.getOrDefault(nums[i],0)+1);
        }
        int maxi=0;
        for(int key :mpp.keySet()){
            int val=mpp.get(key);
            maxi=Math.max(maxi,val);
        }
        int ans=0;
        for(int key :mpp.keySet()){
            if(maxi==mpp.get(key)){
                ans+=maxi;
            }
        }
        return ans;
    }
}