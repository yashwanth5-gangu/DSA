class Solution {
    public int countPrefixes(String[] words, String s) {
        int count=0;
        for(int i=0;i<words.length;i++){
           int len=words[i].length();
           if(len <= s.length()&& s.substring(0,len).equals(words[i]))count++;
        }
        return count;
    }
}