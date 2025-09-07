class Solution {
    public int majorityElement(int[] nums) {
        Map<Integer,Integer>mpp= new HashMap<>();
        for(int  it :nums){
            if(mpp.containsKey(it)){
                mpp.put(it,mpp.get(it)+1);
            }
            else{
                mpp.put(it,1);
            }
        }
        for(int key : mpp.keySet()){
            int val=mpp.get(key);
            if(val>nums.length/2){
                return key;
            }
        }
        return -1;
    }
}