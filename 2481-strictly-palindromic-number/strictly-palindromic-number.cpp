class Solution {
public:
string get(int n,int b){
    string y;
    while(n){
        if(n%b!=0){
            int m=n%b;
             y+=m+'0';
             n=n/b;
        }
        else{
            y+='0';
            n=n/b;
        }
    }
    return y;
}
bool func(string y){
    string t=y;
    reverse(t.begin(),t.end());
    return t==y;
}
    bool isStrictlyPalindromic(int n) {
       for(int i=2;i<=n-2;i++){
        string s=get(n,i);
        if(!func(s)){
             return false;
            
        }
       }
       return true;
    }
};