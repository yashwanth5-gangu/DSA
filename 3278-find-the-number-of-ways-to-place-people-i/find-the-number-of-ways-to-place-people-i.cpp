class Solution {
public:
 static bool compare(vector<int>a,vector<int>b){
     if(a[0]==b[0])return a[1]>b[1];
     return a[0]<b[0];
        
}
    int numberOfPairs(vector<vector<int>>& points) {
      
        sort(points.begin(),points.end(),compare);
        int ans=0;
        for(int i=0;i<points.size();i++){
            int maxy=INT_MIN;
            int yi=points[i][1];
            for(int j=i+1;j<points.size();j++){
                int yj=points[j][1];
                if(yi>=yj && yj>maxy){
                    ans++;
                    maxy=yj;
                }
            }
        }
        return ans;
    }
};