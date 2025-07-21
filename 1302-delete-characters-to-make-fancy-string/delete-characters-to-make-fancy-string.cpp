class Solution {
public:
    string makeFancyString(string s) {
        int n = s.size();
        string ans = "";
        ans += s[0];
        int count = 0;
        for (int i = 1; i < n; i++) {
            if (s[i] == s[i - 1]) {
                count++;
               
                if (count >= 2) {
             
                    continue;
                }

            } else{
                count=0;
            }
           

                ans += s[i];
               
            
        }

        return ans;
    }
};