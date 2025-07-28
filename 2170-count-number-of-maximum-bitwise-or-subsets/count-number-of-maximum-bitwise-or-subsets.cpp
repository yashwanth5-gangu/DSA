class Solution {
public:
int func(int i,vector<int>&nums,int orr,int count,int t){
  if(i==nums.size()){
    if(t==orr){
        return 1;
    }
    else{
        return 0;
    }
  }
 int take= func(i+1,nums,orr,count,t|nums[i]) ;
 int skip= func(i+1,nums,orr,count,t);
  return take+skip;
}
    int countMaxOrSubsets(vector<int>& nums) {
        int orr=0;
        for(int i=0;i<nums.size();i++){
            orr=orr|nums[i];
        }
      return func(0,nums,orr,0,0);
    }
};