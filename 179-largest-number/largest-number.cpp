class Solution {
public:
static bool compare(string &a,string &b){
    return a+b>b+a;
}
    string largestNumber(vector<int>& nums) {

        vector<string>ans;
        for(auto &it :nums){
            ans.push_back(to_string(it));
        }
       sort(ans.begin(),ans.end(),compare);
        string ans1;
        for(int i=0;i<ans.size();i++){
            ans1+=ans[i];
        }
        if(ans1[0]=='0')return "0";
        return ans1;
    }
};