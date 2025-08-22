class Solution {
public:
    string getEncryptedString(string s, int k) {
        int n=s.size();
        string ans;
        for(int i=0;i<n;i++){
            int t=(i+k)%n;
           ans+=s[t];
        }
        return ans;
    }
};