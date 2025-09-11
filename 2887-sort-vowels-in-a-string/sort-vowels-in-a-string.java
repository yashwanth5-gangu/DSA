class Solution {
    boolean func(char ch){
        return (ch=='a'|| ch=='e'|| ch=='i'||ch=='o'||ch=='u'||ch=='A'|| ch=='E'|| ch=='I'||ch=='O'||ch=='U');
    }
    public String sortVowels(String s) {
        List<Character> lis=new ArrayList<>();
        for(int i=0;i<s.length();i++){
            if(func(s.charAt(i))){
                lis.add(s.charAt(i));
            }
        }
        Collections.sort(lis);
        int j=0;
        StringBuilder ans=new StringBuilder();
        for(int i=0;i<s.length();i++){
            if(!func(s.charAt(i))){
          ans.append(s.charAt(i));
            }
            else{
                if(j<lis.size()){
               ans.append(lis.get(j));
                j++;
                }
            }
        }
           return ans.toString();
    }
}