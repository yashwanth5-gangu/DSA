class Solution {
public:
    string reverseStr(string s, int k) {
        int n=s.size();
        if(n<k){
            reverse(s.begin(),s.end());
            return s;

        }else{
      int start=0;
      int end=k;
       reverse(s.begin()+start,s.begin()+end);
      while(start+2*k<n){
        start=start+2*k;
         end=min(start+k,n);
         reverse(s.begin()+start,s.begin()+end);
       
        

      }
    
        }
      return s;
    }
};