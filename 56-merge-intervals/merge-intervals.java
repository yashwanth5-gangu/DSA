class Solution {
    public int[][] merge(int[][] intervals) {
        int n=intervals.length;
        if(n==1)return intervals;
        Arrays.sort(intervals,(a,b)->{
            return a[0]-b[0];
        });
      List<List<Integer>> arr=new ArrayList<>();
        int start=intervals[0][0];
        int end=intervals[0][1];
        for(int i=1;i<intervals.length;i++){
            if(intervals[i][0]<=end){
                end=Math.max(end,intervals[i][1]);
            }
            else{
              arr.add(Arrays.asList(start,end));
              start=intervals[i][0];
              end=intervals[i][1];
            }
        }
        arr.add(Arrays.asList(start,end));
        int [][] new2=new int[arr.size()][2];
        for(int i=0;i<arr.size();i++){
            new2[i][0]=arr.get(i).get(0);
            new2[i][1]=arr.get(i).get(1);
        } 
        return new2;
    }
}