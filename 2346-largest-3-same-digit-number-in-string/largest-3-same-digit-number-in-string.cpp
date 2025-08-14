class Solution {
public:
    string largestGoodInteger(string num) {
        int  n=num.size();
        int maxi=0;
       
        int sum=0;
         string ans;
        for(int i=0;i<=n-3;i++){
           
            
            if((num[i]-'0')==(num[i+1]-'0') && (num[i+1]-'0')==(num[i+2]-'0')){
                sum=(num[i]-'0')+(num[i+1]-'0')+(num[i+2]-'0');
               
               if(sum>=maxi){
                maxi=max(maxi,sum);
                ans.clear();
                 ans+=num[i];
                ans+=num[i+1];
                ans+=num[i+2];

               }
              
               
                
            }
        }
        return ans;
    }
};