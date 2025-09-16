class Solution {
    class Pair{
        Character c;
        Integer t;
        Pair(Character c,Integer t){
            this.c=c;
            this.t=t;
        }
    }
    public String removeDuplicates(String s, int k) {
        Stack<Pair>st=new Stack<>();
        for(int i=0;i<s.length();i++){
            if(!st.empty() && st.peek().c==s.charAt(i)){
                st.peek().t++;
            }
            else{
                st.push(new Pair(s.charAt(i),1));
            }
            if(st.peek().t==k){
                  st.pop();
                
            }
        }
        StringBuilder str=new StringBuilder();
        while(!st.empty()){
            
            for(int i=0;i<st.peek().t;i++){
            str.append(st.peek().c);
            
            }
            st.pop();
        }
        return str.reverse().toString();
    }
}