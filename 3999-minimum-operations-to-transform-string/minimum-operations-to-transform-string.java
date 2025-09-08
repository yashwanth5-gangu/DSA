class Solution {
    public int minOperations(String s) {
        int[] freq=new int[26];
        for(char c : s.toCharArray()){
            freq[c-'a']++;
        }
        for(int i=1;i<26;i++){
            if(freq[i]>0){
                return (26-i);
            }
        }
        return 0;
    }
}