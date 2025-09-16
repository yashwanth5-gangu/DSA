class Solution {
    public long interchangeableRectangles(int[][] rectangles) {
        Map<Double,Integer>mpp=new HashMap<>();
        for(int i=0;i<rectangles.length;i++){
            int first=rectangles[i][0];
            int second=rectangles[i][1];
            double t=1.0 *first/second;
            if(mpp.containsKey(t)){
                mpp.put(t,mpp.get(t)+1);
            }
            else{
                mpp.put(t,1);
            }
        }
        long count=0;
        for(Double key : mpp.keySet()){
            int val=mpp.get(key);
            count+=(long)(val)*(long)(val-1)/2;
        }
        return count;
    }
}