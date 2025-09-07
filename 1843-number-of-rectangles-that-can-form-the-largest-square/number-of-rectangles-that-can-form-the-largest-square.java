class Solution {
    public int countGoodRectangles(int[][] rectangles) {
        int n=rectangles.length;
      List<Integer> arr=new ArrayList<>();
        for(int i=0;i<n;i++){
            int t=rectangles[i][0];
            int y=rectangles[i][1];
            arr.add(Math.min(t,y));
        }
        int maxi=arr.get(0);
        for(int i=1;i<arr.size();i++){
            maxi=Math.max(maxi,arr.get(i));
        }

        Map<Integer,Integer>mpp=new HashMap<>();
        for(int it :arr){
            if(mpp.containsKey(it)){
                mpp.put(it,mpp.get(it)+1);
            }
            else{
                mpp.put(it,1);
            }
        }
        int ans=0;
        for(int key : mpp.keySet()){
           
            if(key ==maxi){
                ans+=mpp.get(key);
            }
        }
        return ans;
    }
}