class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<int>st;
        int n=num.size();
        if(k==1 && n==1)return to_string(0);
        for(int i=0;i<n;i++){
            while(!st.empty() && st.top()>num[i] && k>0){
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while(k>0 && !st.empty()){
            st.pop();
            k--;
        }
        string ans;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        
    while(ans.size()>0 && ans[0]== '0'){
        ans.erase(0,1);
    }
      return ans.size()>0 ? ans : "0";  
    }
};