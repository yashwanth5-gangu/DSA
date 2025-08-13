class Solution {
public:
void func(unordered_map<int,int>mpp,vector<vector<int>>&ans,vector<int>&temp,int n){
    
    if(temp.size()==n){
        ans.push_back(temp);
    }
    for(auto &[num,count]:mpp){
        if(count==0)continue;
        temp.push_back(num);
        mpp[num]--;
        func(mpp,ans,temp,n);
        temp.pop_back();
        mpp[num]++;
    }
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int n=nums.size();
        for(int num:nums){
            mpp[num]++;
        }
       vector<vector<int>>ans;
        vector<int>temp;
        func(mpp,ans,temp,n);
        return ans;
        
    }
};