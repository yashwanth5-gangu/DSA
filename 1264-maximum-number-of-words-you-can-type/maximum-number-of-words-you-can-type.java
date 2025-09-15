class Solution {
    public int canBeTypedWords(String text, String bro) {
        boolean []arr=new boolean[26];
        for(char c: bro.toCharArray()){
            arr[c-'a']=true;
        }
        int count=0;
        boolean flag=true;
        for(int i=0;i<text.length();i++){
            if(text.charAt(i)!=' '){
                if(arr[text.charAt(i)-'a']){
                    flag=false;
                }
            }
            else{
                if(flag)count++;
                flag=true;
            }
        }
        if(flag)count++;
        return count;
    }
}