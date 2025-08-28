class Solution {
public:
    int maxConsecutiveAnswers(string a, int k) {
        map<char,int>mpp;
        int l=0;
        int r=0;
        int maxfreq=0;
        int maxlen=0;
        int n=a.size();
        while(r<n){
            mpp[a[r]]++;
            maxfreq=max(maxfreq,mpp[a[r]]);
            if((r-l+1)-maxfreq>k){
                mpp[a[l]]--;
                if(mpp[a[l]]==0)mpp.erase(a[l]);
                l++;
            }
            maxlen=max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};