class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int>mpp;
        for(auto & c:s){
            mpp[c]++;
        }
        int freq=mpp.begin()->second;
        for(auto & it:mpp){
            if(it.second!=freq)return false;
        }
        return true;
    }
};