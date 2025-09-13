class Solution {
 public static  void swap(String []arr,int i,int j){
    String temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;

    }
    public String largestNumber(int[] nums) {
      List<String> arr=new ArrayList<>();
        for(int it :nums){
            arr.add(Integer.toString(it));
            
        }
        int n=arr.size();
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                String first=arr.get(j)+arr.get(j+1);
                String second=arr.get(j+1)+arr.get(j);
                if(second.compareTo(first)>0){
                Collections.swap(arr,j,j+1);
                }
            }
        }
        String ans1="";
        for(int i=0;i<arr.size();i++){
            ans1+=arr.get(i);
        }
        if(ans1.charAt(0)=='0')return "0";
        return ans1;
     

    }
}