class Solution {
public:
    int longestContinuousSubstring(string s) {
        int n=s.size();
        int maxi=1;
        int count=0;
        for(int i=1;i<n;i++){
            if((s[i]-'a')==(s[i-1]-'a'+1)){
                count++;
                
            }
            else{
               
                count=0;
            }
             maxi=max(maxi,count+1);
        }
        return maxi;
        
    }
};