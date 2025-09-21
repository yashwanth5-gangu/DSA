class Solution {
    public int compress(char[] chars) {
       int n=chars.length;
       int index=0;
       int i=0;
       while(i<n){
        char ch=chars[i];
        int count=0;
        while(i<n &&chars[i]==ch){
            count++;
            i++;
        }
        chars[index]=ch;
        index++;
        if(count>1){
            String ans=Integer.toString(count);
            for(char t :ans.toCharArray()){
                chars[index]=t;
                index++;
            }
        }
       }
       return index;
    }
};
