class Solution {
 
    public String largestNumber(int[] nums) {
      List<String> arr=new ArrayList<>();
        for(int it :nums){
            arr.add(Integer.toString(it));
            
        }
      Collections.sort(arr,(a,b)->{
        return (b+a).compareTo(a+b);
      });
        String ans1="";
        for(int i=0;i<arr.size();i++){
            ans1+=arr.get(i);
        }
        if(ans1.charAt(0)=='0')return "0";
        return ans1;
     

    }
}