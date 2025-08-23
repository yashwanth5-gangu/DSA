class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int>ans,ans1;
        sort(nums.begin(),nums.end());
        int n= nums.size();
        for(int i=0;i<n;i++){
            if(i<(n+1)/2){
              ans.push_back(nums[i]);
            }
            else{
                ans1.push_back(nums[i]);
            }
        }
       
        vector<int>ans3;
        int t=ans.size();
        int y=ans1.size();
        int l=t-1;
        int r=y-1;
        while(l>=0 || r>=0){
           if(l>=0 ){
            ans3.push_back(ans[l]);
            l--;
           }
           if(r>=0){
            ans3.push_back(ans1[r]);
            r--;
           }
        }
        nums=ans3;
    }
};