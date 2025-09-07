class Solution {
    public boolean containsDuplicate(int[] nums) {
        Map<Integer,Integer>mpp=new HashMap<>();
        for(int it :nums){
            if(mpp.containsKey(it)){
                mpp.put(it,mpp.get(it)+1);
            }
            else{
                mpp.put(it,1);
            }
            
        }
        for(int key : mpp.keySet()){
            if(mpp.get(key)>1){
                return true;
            }
        }
        return false;
    }
}