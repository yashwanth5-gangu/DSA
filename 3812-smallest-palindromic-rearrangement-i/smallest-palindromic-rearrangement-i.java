class Solution {
    public String smallestPalindrome(String s) {
        TreeMap<Character,Integer>mpp=new TreeMap<>();
        for(char c: s.toCharArray()){
            if(mpp.containsKey(c)){
                mpp.put(c,mpp.get(c)+1);
            }
            else{
                mpp.put(c,1);
            }

        }
        StringBuilder ans=new StringBuilder();
         char ch=0;
        for(char key :mpp.keySet()){
            int val=mpp.get(key);
            if(val%2!=0){
                 ch=key;
            }
            for(int i=0;i<val/2;i++){
                ans.append(key);
            }
        }
      String ans1=ans.toString();
        String t= ans.reverse().toString();
        if(ch!=0){
            return ans1+ch+t;
        }
        else{
            return ans1+t;
        }
        
    }
}