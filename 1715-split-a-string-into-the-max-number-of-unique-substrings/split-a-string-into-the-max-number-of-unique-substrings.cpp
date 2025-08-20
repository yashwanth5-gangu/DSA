class Solution {
public:
int maxi=0;
void func(string s,unordered_set<string>ans,int index){
    if(index==s.size()){
        maxi=max(maxi,(int)ans.size());
        return ;

    }
    string curr;
    for(int i=index;i<s.size();i++){
        curr+=s[i];
      if(ans.find(curr)==ans.end()){
        ans.insert(curr);
        func(s,ans,i+1);
        ans.erase(curr);
      }
    }
}
    int maxUniqueSplit(string s) {
        unordered_set<string>ans;
        func(s,ans,0);
        return maxi;
        
    }
};