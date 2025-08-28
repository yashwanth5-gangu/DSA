class Solution {
public:
    int characterReplacement(string s, int k) {
        map<char,int>mpp;
        int l=0;
        int r=0;
        int maxlen=0;
        int maxfreq=0;
        int n=s.size();
        while(r<n){
            mpp[s[r]]++;
          maxfreq=max(maxfreq,mpp[s[r]]);
          if((r-l+1)-maxfreq>k){
            mpp[s[l]]--;
            if(mpp[s[l]]==0)mpp.erase(s[l]);
            l++;
          }
          maxlen=max(maxlen,r-l+1);
          r++;
        }
        return maxlen;
    }
};