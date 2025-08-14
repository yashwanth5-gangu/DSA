class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
       
        int ans=0;
        int count=0;
        for(int i=n-1;i>=0;i--){
            if((num[i]-'0')%2!=0){
               ans=i;
               count++;
               break;
            }
        }
        if(count>0){
        return num.substr(0,ans+1);
        }
        else{
            return "";
        }
    }
};