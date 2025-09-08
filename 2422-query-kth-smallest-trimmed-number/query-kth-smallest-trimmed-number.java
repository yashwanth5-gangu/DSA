class Solution {
    class Pair{
        String ans;
        int index;
        Pair(String s,int i){
            this.ans=s;
            this.index=i;
        }
    }
    public int[] smallestTrimmedNumbers(String[] nums, int[][] queries) {
        List<Integer> li=new ArrayList<>();
        for(int []it :queries){
            int t=it[0];
            int y=it[1];
             List<Pair> new1=new ArrayList<>();
             for(int i=0;i<nums.length;i++){
                String num=nums[i];
             new1.add(new Pair(num.substring(num.length()-y),i));
             }
             Collections.sort(new1,(a,b)->{
                int cmp = a.ans.compareTo(b.ans);  
            if (cmp == 0) return a.index - b.index;    
             return cmp;
             });
            li.add(new1.get(t-1).index);
            new1.clear();
             
             
        }
        int t=queries.length;
        int [] arr=new int[li.size()];
        for(int i=0;i<t;i++){
            arr[i]=li.get(i);
        }
        return arr;
    }
}