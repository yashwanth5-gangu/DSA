class Solution {
public:
    string largestNumber(vector<int>& nums) {

        vector<string>ans;
        for(auto &it :nums){
            ans.push_back(to_string(it));
        }
        for(int i=0;i<ans.size()-1;i++){
            for(int j=0;j<ans.size()-i-1;j++){
                string first=ans[j]+ans[j+1];
                string second=ans[j+1]+ans[j];
                if(second>first){
                    swap(ans[j],ans[j+1]);
                }
            }
        }
        string ans1;
        for(int i=0;i<ans.size();i++){
            ans1+=ans[i];
        }
        if(ans1[0]=='0')return "0";
        return ans1;
    }
};