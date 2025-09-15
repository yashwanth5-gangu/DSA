class Solution {
public:
    int canBeTypedWords(string text, string bro) {
       stringstream ss(text);
       string ans;
       int count=0;
       while(getline(ss,ans,' ')){
         bool flag=true;
          for(int i=0;i<bro.size();i++){
            for(int j=0;j<ans.size();j++){
                if(bro[i]==ans[j]){
                    flag=false;
                    break;
                }
            }
            if(flag==false)break;
          }
            if(flag==true){
                count++;
            }
          
       }
       return count;
    }
};