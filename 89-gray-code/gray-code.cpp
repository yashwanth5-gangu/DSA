class Solution {
public:
    vector<int> grayCode(int n) {
      int t=1<<n;
      vector<int>result;
      for(int i=0;i<t;i++){
        result.push_back(i^(i>>1));
      }
      return result;
    }
};