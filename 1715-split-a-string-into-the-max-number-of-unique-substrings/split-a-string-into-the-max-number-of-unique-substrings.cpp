class Solution {
public:

void func(string s,unordered_set<string>ans,int i,int  &maxicount,int currcount){
    if(i==s.size()){
        maxicount=max(maxicount,currcount);
        return ;

    }
    string curr;
    for(int j=i;j<s.size();j++){
        curr+=s[j];
      if(ans.find(curr)==ans.end()){
        ans.insert(curr);
        func(s,ans,j+1,maxicount,currcount+1);
        ans.erase(curr);
      }
    }
}
    int maxUniqueSplit(string s) {
        unordered_set<string>ans;
        int maxicount=0;
        int currcount=0;
        func(s,ans,0,maxicount,currcount);
        return maxicount;
        
    }
};