class Solution {
    public String addStrings(String num1, String num2) {
        int i=num1.length()-1;
        int j=num2.length()-1;
        String result="";
        int carry=0;
        while(i>=0 ||j>=0 ||carry!=0){
            int p=(i>=0 ) ? num1.charAt(i)-'0':0;
            int q=(j>=0) ? num2.charAt(j)-'0':0;
            int sum=p+q+carry;
            result+=(sum%10);
            carry=sum/10;
            i--;
            j--;
        }
        String ans= new StringBuilder(result).reverse().toString();
        return ans;
    }
}