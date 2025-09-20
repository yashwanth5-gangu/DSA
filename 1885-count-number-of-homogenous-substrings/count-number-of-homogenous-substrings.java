class Solution {
   
    public int countHomogenous(String s) {
         int mod=(int)1e9+7;
        Map<Character,Integer>mpp=new HashMap<>();
        for(char c: s.toCharArray()){
            if(mpp.containsKey(c)){
                mpp.put(c,mpp.get(c)+1);
            }
            else{
                mpp.put(c,1);
            }
        }
        int count=0;
        for(char key :mpp.keySet()){
            int val=mpp.get(key);
            count=(count+val)%mod;
        }
        int ans=0;
        int count1=0;
        for(int i=0;i<s.length()-1;i++){
            if(s.charAt(i)==s.charAt(i+1)){
                count1++;
                ans=(ans+count1)%mod;
            }
            else{
                count1=0;
            }
        }
        return (ans+count)%mod;
    }
}