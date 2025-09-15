class Solution {
    public int canBeTypedWords(String text, String bro) {
        String[] arr=text.split("\\s+");
        int count=0;
        for(int i=0;i<arr.length;i++){
            String t=arr[i];
            boolean flag=true;
            for(int j=0;j<bro.length();j++){
                for(int k=0;k<t.length();k++){
                    if(bro.charAt(j)==t.charAt(k)){
                        flag=false;
                        break;
                    }
                }
                if(flag==false){
                    break;
                }
            }
            if(flag==true)count++;
        }
        return count;
    }
}