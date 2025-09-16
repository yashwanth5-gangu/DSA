class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<int>ans;
       
        for(int i=0;i<nums.size();i++){
            int curr=nums[i];
            while(!ans.empty()){
            int t=ans.back();
            int GCD=gcd(t,curr);
            if(GCD==1)break;
                ans.pop_back();
                curr=lcm(t,curr);
               
            }
           
            
            ans.push_back((int)curr);
        }
        
      return ans;
        
    }
};