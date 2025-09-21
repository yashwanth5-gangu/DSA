class Solution {
    public int minimumOperations(int[] nums) {
        Map<Integer,Integer>even=new HashMap<>();
        Map<Integer,Integer>odd=new HashMap<>();
        for(int i=0;i<nums.length;i++){
            if(i%2==0){
                even.put(nums[i],even.getOrDefault(nums[i],0)+1);
            }
            else{
                odd.put(nums[i],odd.getOrDefault(nums[i],0)+1);
            }
        }
       int evenmax=0;
       int even2max=0;
       int evennum=0-1;
       for(int key :even.keySet()){
        int val=even.get(key);
        if(val>evenmax){
            even2max=evenmax;
            evenmax=val;
            evennum=key;
        }
        else if(val>even2max){
            even2max=val;
        }
       }
        int oddmax=0;
       int odd2max=0;
       int oddnum=-1;
       for(int key :odd.keySet()){
        int val=odd.get(key);
        if(val>oddmax){
            odd2max=oddmax;
            oddmax=val;
            oddnum=key;
        }
        else if(val>odd2max){
            odd2max=val;
        }
       }
       if(evennum!=oddnum){
        return nums.length-evenmax-oddmax;
       }
       else{
        return nums.length-Math.max(evenmax+odd2max,oddmax+even2max);
       }
    }
}