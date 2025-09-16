class Solution {
    public static int gcd(int a,int b){
        if(a==0)return b;
        if(b==0)return a;
        if(a>b)return gcd(a%b,b);
         return gcd(a,b%a);
         

    }
    public static int lcm(int a,int b){
        int t=gcd(a,b);
         long pro=1L*a*b;
         return (int)(pro/t);
    }
    public List<Integer> replaceNonCoprimes(int[] nums) {
        Stack<Integer>st=new Stack<>();
        for(int i=0;i<nums.length;i++){
            int curr=nums[i];
            while(!st.empty()){
                int t=st.peek();
                int GCD=gcd(t,curr);
                if(GCD==1)break;
                st.pop();
                curr=lcm(t,curr);
            }
            st.push(curr);
        }
       List<Integer> arr=new ArrayList<>();
        while(!st.empty()){
            arr.add(st.peek());
            st.pop();
        }
        Collections.reverse(arr);
        return arr;
    
}
}