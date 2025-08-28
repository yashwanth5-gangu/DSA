class Solution {
public:
bool func(char ch1, char ch2){
    return (ch1=='a'||ch1=='e'|| ch1=='o'||ch1=='i'||ch1=='u')
    && (ch2=='a'||ch2=='e'|| ch2=='o'||ch2=='i'||ch2=='u');
}
    int vowelStrings(vector<string>& words, int left, int right) {
        int count=0;
        for(int i=left;i<=right;i++){
            string s=words[i];
            char ch1=s[0];
            char ch2=s[s.size()-1];
            if(func(ch1,ch2))count++;
        }
        return count;
    }
};