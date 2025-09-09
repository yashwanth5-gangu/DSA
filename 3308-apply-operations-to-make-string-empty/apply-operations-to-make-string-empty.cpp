class Solution {
public:
    string lastNonEmptyString(string s) {
        map<char,int>mpp;
        int n=s.size();
        for(auto c: s){
            mpp[c]++;
        }
        int mini=INT_MIN;
        for(auto it : mpp){
            mini=max(it.second,mini);
        }
        vector<int>ans;
        string result="";
        vector<bool>visited(26,false);
        for(int i=s.size()-1;i>=0;i--){
          
            if(mpp[s[i]]==mini && visited[s[i]-'a']==false){
            
              visited[s[i]-'a']=true;
              result+=s[i];
            }
            
        }
        reverse(result.begin(),result.end());
        return result;
       
    }
};