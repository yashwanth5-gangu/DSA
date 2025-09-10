class Solution {
    public int countPrefixes(String[] words, String s) {
        Set<String>st=new HashSet<>();
        for(int i=0;i<s.length();i++){
            String s1=s.substring(0,i+1);
            st.add(s1);
        }
        int count=0;
        for(String str:words){
            if(st.contains(str))count++;
        }
        return count;
    }
}