class Solution {
    public int characterReplacement(String s, int k) {
        Map<Character,Integer> mpp=new HashMap<>();
        int l=0;
        int r=0;
        int maxfreq=0;
        int maxlen=0;
        while(r<s.length()){
            if(mpp.containsKey(s.charAt(r))){
                mpp.put(s.charAt(r),mpp.get(s.charAt(r))+1);
            }
            else{
                mpp.put(s.charAt(r),1);
            }
            maxfreq=Math.max(maxfreq,mpp.get(s.charAt(r)));
            if((r-l+1)-maxfreq>k){
                mpp.put(s.charAt(l),mpp.get(s.charAt(l))-1);
                if(mpp.get(s.charAt(l))==0){
                    mpp.remove(s.charAt(l));
                }
                l++;
            }
            maxlen=Math.max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
}