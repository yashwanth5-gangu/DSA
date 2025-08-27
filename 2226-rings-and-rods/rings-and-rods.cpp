class Solution {
public:
    int countPoints(string rings) {
        map<int,set<char>>mpp;
        for(int i=1;i<rings.size();i+=2){
            mpp[rings[i]-'0'].insert(rings[i-1]);
        }
        int count=0;
        for(auto &it:mpp){
            if(it.second.size()>=3){
                count++;
            }
        }
        return count;
    }
};