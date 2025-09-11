class Solution {
    public int lengthOfLongestSubstring(String s) {
        Map<Character,Integer>mpp=new HashMap<>();
        int maxi=0;
        int l=0;
        int r=0;
        int n=s.length();
        while(r<n){
          if(mpp.containsKey(s.charAt(r))){
            mpp.put(s.charAt(r),mpp.get(s.charAt(r))+1);
          }
          else{
            mpp.put(s.charAt(r),1);
          }
          if(mpp.size()==r-l+1){
            maxi=Math.max(maxi,r-l+1);
          }
          else if(mpp.size()<r-l+1){
            mpp.put(s.charAt(l),mpp.get(s.charAt(l))-1);
            if(mpp.get(s.charAt(l))==0){
                mpp.remove(s.charAt(l));

            }
            l++;
          }
          r++;
        }
        return maxi;

    }
}