class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();
        int start = 0;

        while (start < n) {
            int end = min(start + k, n); 
            reverse(s.begin() + start, s.begin() + end);
            start += 2 * k; 
        }

        return s;
    }
};
