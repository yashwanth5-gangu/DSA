class Solution {
    public int longestSquareStreak(int[] nums) {
        Set<Long>st=new HashSet<>();
        for(int num :nums){
            st.add((long)num);
        }
          int maxi=0;
        for(long num :nums){
        int streak=0;
       while(st.contains(num)){
            streak++;
            num=num*num;
            if(num>1e5)break;
        }
        maxi=Math.max(maxi,streak);
        }
        return (maxi<2)?-1:maxi;
    }
}