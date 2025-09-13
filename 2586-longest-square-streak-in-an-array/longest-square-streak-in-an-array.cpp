class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        map<double,int>mpp;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
             double t=sqrt(nums[i]);
            if(mpp.find(t)!=mpp.end()){
               
                mpp[nums[i]]=mpp[t]+1;
            }
            else{
                mpp[nums[i]*1.0]=1;
            }
        }
        int maxi=1;
        for(auto it :mpp){
            maxi=max(maxi,it.second);
        }
        return (maxi==1)? -1:maxi;
    }
};