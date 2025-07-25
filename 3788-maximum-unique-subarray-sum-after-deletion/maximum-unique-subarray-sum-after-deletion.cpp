class Solution {
public:
    int maxSum(vector<int>& nums) {
        set<int>st;
        int n=nums.size();
        int sum=0;
    int t=*max_element(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(st.find(nums[i])==st.end() && nums[i]>0){
                sum+=nums[i];
                st.insert(nums[i]);
            }

        }
        return sum>0 ? sum:t;
    }
};