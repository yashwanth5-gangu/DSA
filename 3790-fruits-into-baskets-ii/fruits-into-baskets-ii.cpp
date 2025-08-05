class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n=fruits.size();
        
        vector<bool>ans(n,true);
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(ans[j]==true && fruits[i]<=baskets[j]){
                    ans[j]=false;
                    count++;
                    break;
                }
            }
        }
        return n-count;
    }
};