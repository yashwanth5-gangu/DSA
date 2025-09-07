class Solution {
    public int romanToInt(String s) {
        Map<String,Integer>mpp=new HashMap<>();
        mpp.put("I",1);
        mpp.put("V",5);
        mpp.put("X",10);
        mpp.put("L",50);
        mpp.put("C",100);
        mpp.put("D",500);
        mpp.put("M",1000);
        int ans=0;
        for(int i=0;i<s.length()-1;i++){
            if(mpp.get(String.valueOf(s.charAt(i)))<mpp.get(String.valueOf(s.charAt(i+1)))){
                ans-=mpp.get(String.valueOf(s.charAt(i)));
            }
            else{
                ans+=mpp.get(String.valueOf(s.charAt(i)));
            }
        }
        ans+=mpp.get(String.valueOf(s.charAt(s.length()-1)));
        return ans;
    }
}