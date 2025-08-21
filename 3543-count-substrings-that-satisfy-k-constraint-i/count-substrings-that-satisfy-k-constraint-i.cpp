class Solution {
public:
   bool func(string s,int k){
     int t;
    int count1=0;
    int count2=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0')count1++;
        else{
            count2++;
        }
    }
    return (count1<=k || count2<=k);
   }
    int countKConstraintSubstrings(string s, int k) {
        int count=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            string ans="";
            for(int j=i;j<n;j++){
                ans+=s[j];
                if(func(ans,k)){
                    count++;
                }
            }
        }
        return count;
    }
};