class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n=blocks.size();
        int l=0;
        int r=0;
        int count=0;
        int mini=INT_MAX;
        while(r<n){
            if(blocks[r]=='W')count++;
              if(r-l+1==k){
                mini=min(mini,count);
                if(blocks[l]=='W')count--;
                l++;
              }
              r++;
             
              
        }
        return mini;
    }
};