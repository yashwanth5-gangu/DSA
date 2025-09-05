class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        map<double,int>mpp;
        for(int i=0;i<rectangles.size();i++){
            int t=rectangles[i][0];
            int y=rectangles[i][1];
            mpp[(1.0* t)/y]++;
        }
        long long  count=0;
        for(auto & p :mpp){
            int t=p.second;
            count+=(long long )t*(long long )(t-1)/2;
        }
        return count;
    }
};