class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans;
        for(int i=0;i<intervals.size();i++){
            ans.push_back(intervals[i]);
        }
      
       ans.push_back(newInterval);
        sort(ans.begin(),ans.end());
        vector<vector<int>>ans1;
        int start=ans[0][0];
        int end=ans[0][1];
        for(int i=1;i<ans.size();i++){
            if(ans[i][0]<=end){
                end=max(end,ans[i][1]);
            }
            else{
                ans1.push_back({start,end});
                start=ans[i][0];
                end=ans[i][1];
            }
        }
        ans1.push_back({start,end});
        return ans1;
    }
};