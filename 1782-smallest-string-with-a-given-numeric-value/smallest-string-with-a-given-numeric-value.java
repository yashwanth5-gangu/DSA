class Solution {
    public String getSmallestString(int n, int k) {
       
   StringBuilder ans=new StringBuilder();
        while(n>0){
            
            if(k-n>=26){
                ans.append('z');
                k=k-26;
                n--;
                
            }
            else{ 
                if(n<0)break;
                ans.append((char)('a'+(k-n)));
                k=n-1;
                n--;
                
                

            }
        }
       return ans.reverse().toString();

    }
}