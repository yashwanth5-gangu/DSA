class Solution {
public:
long long mod=1e9+7;
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        vector<long long >powers;
        for(int i=0;i<32;i++){
            if(n&(1<<i)){
                powers.push_back(1LL<<i);
            }
        }
        int q=queries.size();
        vector<int >ans;
        for(auto & it:queries){
            int first=it[0];
            int second=it[1];
            int product=1;
            for(int i=first;i<=second;i++){
               product=(product *powers[i])%mod;
            }
            ans.push_back(product);
        }
        return ans;
    }
};