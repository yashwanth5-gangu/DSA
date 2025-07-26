class Solution {
public:
int func1(string s,int x,int y){
    stack<char>st;
    int n=s.size();
    int sum=0;
    for(int i=0;i<n;i++){
        if(!st.empty() && st.top()=='a' && s[i]=='b'){
            sum+=x;
            st.pop();
        }
        else{
       st.push(s[i]);
        }
    }
    string ans;
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    reverse(ans.begin(),ans.end());
      stack<char>st1;
    for(int i=0;i<ans.size();i++){
        if(!st1.empty() && st1.top()=='b' && ans[i]=='a'){
            sum+=y;
            st1.pop();
        }
        else{
        st1.push(ans[i]);
        }

    }
    return sum;
}
int func2(string s,int x,int y){
    stack<char>st;
    int n=s.size();
    int sum=0;
    for(int i=0;i<n;i++){
        if(!st.empty() && st.top()=='b' && s[i]=='a'){
            sum+=y;
            st.pop();
        }
        else{
       st.push(s[i]);
        }
    }
    string ans;
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    reverse(ans.begin(),ans.end());
      stack<char>st1;
    for(int i=0;i<ans.size();i++){
        if(!st1.empty() && st1.top()=='a' && ans[i]=='b'){
            sum+=x;
            st1.pop();
        }
        else{
        st1.push(ans[i]);
        }
    }
    return sum;
}

    int maximumGain(string s, int x, int y) {
        if(x>y){
            return func1(s,x,y);
        }
        else {
            return func2(s,x,y);
        }
        
    }
};