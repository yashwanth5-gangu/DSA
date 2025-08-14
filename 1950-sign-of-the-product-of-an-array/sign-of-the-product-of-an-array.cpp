class Solution {
public:
int  func(long long  pro){
    if(pro<0)return -1;
    if(pro==0)return 0;
   return 1;
    
}
    int arraySign(vector<int>& nums) {
        long long  pro=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)return 0;
            else{
            pro*=nums[i]/abs(nums[i]);
            }
        }
        return func(pro);
    }
};