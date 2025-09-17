class Solution {
    public int canCompleteCircuit(int[] gas, int[] cost) {
        int sum1=0;
        int sum2=0;
        for(int i=0;i<gas.length;i++){
            sum1+=gas[i];
        }
        for(int i=0;i<cost.length;i++){
            sum2+=cost[i];
        }
        if(sum1<sum2)return -1;
        int ans=0;
        int sum=0;
        for(int i=0;i<gas.length;i++){
            sum+=gas[i]-cost[i];
            if(sum<0){
                sum=0;
                ans=i+1;
            }
        }
        return ans;
    }
}