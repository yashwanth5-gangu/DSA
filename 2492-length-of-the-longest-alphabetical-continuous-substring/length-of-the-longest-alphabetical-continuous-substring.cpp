class Solution {
public:
    int longestContinuousSubstring(string s) {
        int n=s.size();
        int maxi=1;
        int count=1;
        for(int i=1;i<n;i++){
            if((s[i]-'a')==(s[i-1]-'a'+1)){
                count++;
             maxi=max(maxi,count);
                
            }
            else{
               
                count=1;
            }
             
        }
        return maxi;
        
    }
};