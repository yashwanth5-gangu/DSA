class Solution {
public:
    vector<int> smallestSubarrays(vector<int>& nums) {
        int n=nums.size();
        vector<int>result(n);
    vector<int>setbit(32,-1);
        for(int i=n-1;i>=0;i--){
            int endmax=i;
            for(int j=0;j<32;j++){
                if(!(nums[i]&(1<<j))){
                    if(setbit[j]!=-1){
                        endmax=max(endmax,setbit[j]);
                    }
                }
                    else{
                        setbit[j]=i;
                    }
                
            }
            result[i]=endmax-i+1;

        }
        return result;
    }
};