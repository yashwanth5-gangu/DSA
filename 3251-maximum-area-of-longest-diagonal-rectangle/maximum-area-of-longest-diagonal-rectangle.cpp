class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
      
        int maxi = 0;
        int ans = 0;
        for (int i = 0; i < dimensions.size(); i++) {
            int t = dimensions[i][0];
            int y = dimensions[i][1];
            int r = (t * t + y * y);
            if (r > maxi) {
                maxi = r;
                ans = i;
            }
            else if(r==maxi){
                int t1=dimensions[i][0]*dimensions[i][1];
                int t2=dimensions[ans][0]*dimensions[ans][1];
                if(t1>t2)ans=i;
            }
        }
    
   
    return dimensions[ans][0]*dimensions[ans][1];
}
};
