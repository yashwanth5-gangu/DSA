class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<0)return false;
      int t=__builtin_popcount(n);
      return t==1;
    }
};