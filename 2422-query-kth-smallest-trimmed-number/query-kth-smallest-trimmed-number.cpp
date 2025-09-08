class Solution {
public:
static bool compare(pair<string,int>&a,pair<string,int>&b){
    if(a.first==b.first)return a.second<b.second;
    return a.first<b.first;
}
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        vector<int>ans;
        for(auto & it :queries){
            int t=it[0];
            int y=it[1];
            vector<pair<string,int>>new1;
            for(int i=0;i<n;i++){
                string s=(nums[i]);
                new1.push_back({s.substr(s.size()-y),i});
            }
           sort(new1.begin(),new1.end(),compare);
           ans.push_back(new1[t-1].second);
           new1.clear();
        }
       
        return ans;
       

        
    }
};