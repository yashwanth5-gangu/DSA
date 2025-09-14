class Solution {
public:
  string to_lower(string s){
    for(char &ch :s){
        ch=tolower(ch);
    }
    return s;
  }
  string convertion(string s){
    for(char &ch:s){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            ch='*';
        }
    }
    return s;
  }
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        unordered_map<string,int>direct;
        unordered_map<string,string>lowerchar;
        unordered_map<string,string>changevowel;
        for(string &s: wordlist){
            direct[s]++;
            string lowercase=to_lower(s);
            if(lowerchar.find(lowercase)==lowerchar.end()){
                lowerchar[lowercase]=s;
            }
            string convert=convertion(to_lower(s));
            if(changevowel.find(convert)==changevowel.end()){
                changevowel[convert]=s;
            }
        }
        vector<string>ans;
        for(string s1: queries){
             string lo=to_lower(s1);
              string convert1=convertion(to_lower(s1));
            if(direct.find(s1)!=direct.end()){
                ans.push_back(s1);
            }
            //string lo=to_lower(s1);
            else if(lowerchar.find(lo)!=lowerchar.end()){
                ans.push_back(lowerchar[lo]);
            }
         // string convert1=convertion(s1);
          else if(changevowel.find(convert1)!=changevowel.end()){
            ans.push_back(changevowel[convert1]);
          }
          else{
            ans.push_back("");
          }
        }
        return ans;
    }
};