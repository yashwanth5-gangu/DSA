class Solution {
    public String makeSmallestPalindrome(String s) {
        int l=0;
        int r=s.length()-1;
        int n=s.length();
       Character[] arr=new Character[n];
        while(l<=r){
            if(s.charAt(l)==s.charAt(r)){
                arr[l]=s.charAt(l);
                arr[r]=s.charAt(l);
            }
            else{
                if(s.charAt(l)>s.charAt(r)){
                   arr[l]=s.charAt(r);
                   arr[r]=s.charAt(r);
                }
                else{
                    arr[l]=s.charAt(l);
                   arr[r]=s.charAt(l);
                }
            }
            l++;
            r--;
        }
       String ans="";
       for(int i=0;i<arr.length;i++){
        ans+=arr[i];

       }
       return ans;
    }
}