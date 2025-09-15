class Solution {
public:
    int canBeTypedWords(string text, string bro) {
        vector<bool>ans(26,false);
        for(char c :bro){
            ans[c-'a']=true;
        }
        int count=0;
        bool flag=true;
        for(int i=0;i<text.size();i++){
            if(text[i]!=' '){
                if(ans[text[i]-'a']){
                    flag=false;
                }
            }
            else{
                if(flag)count++;
                flag=true;
            }
        }
        if(flag)count++;
        return count;
    }
};