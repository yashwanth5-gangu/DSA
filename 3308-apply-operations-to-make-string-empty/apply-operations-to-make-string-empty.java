class Solution {
String reverse(String ans){
        int i=0;
        int j=ans.length()-1;
        char arr[]=ans.toCharArray();
        while(i<j){
           char temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
            i++;
            j--;
        }
return new String(arr);
    }
    public String lastNonEmptyString(String s) {
        Map<Character,Integer>mpp=new HashMap<>();
        for(char c:s.toCharArray()){
            if(mpp.containsKey(c)){
                mpp.put(c,mpp.get(c)+1);
            }
            else{
                mpp.put(c,1);
            }
        }
        int maxi=Integer.MIN_VALUE;
        for(char key :mpp.keySet()){
            int val=mpp.get(key);
            maxi=Math.max(maxi,val);
        }
        String ans="";
        boolean [] visited=new boolean[26];
        for(int i=s.length()-1;i>=0;i--){
         if(mpp.get(s.charAt(i))==maxi && visited[s.charAt(i)-'a']==false){
                ans+=s.charAt(i);
                visited[s.charAt(i)-'a']=true;
            }
        }
       String ans1= new StringBuilder(ans).reverse().toString();
        return ans1;
    }
}