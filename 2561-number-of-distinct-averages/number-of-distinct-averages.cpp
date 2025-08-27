class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        set<double>st;
        sort(nums.begin(),nums.end());
        int t=0;
        int y=nums.size()-1;
        while(t<y){
           
            double avg=(nums[t]+nums[y])/2.0;
            st.insert(avg);
            t++;
            y--;
        }
        return st.size();
    }
};