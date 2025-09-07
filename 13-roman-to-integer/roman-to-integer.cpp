class Solution {
public:
    int romanToInt(string s) {
        map<char,int> mpp;
       mpp['I']=1;
       mpp['V']=5;
       mpp['X']=10;
       mpp['L']=50;
       mpp['C']=100;
       mpp['D']=500;
       mpp['M']=1000;
       
        int result=0;
        for(int i=0;i<s.size();i++){
            if(mpp[s[i]]<mpp[s[i+1]])
            {
                result=result-mpp[s[i]];
            }
            else
            {
            result=result+mpp[s[i]];
            }
        }

        
       return result;
    }
};