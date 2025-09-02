class Solution {
public:
int mod=1e9+7;
    int threeSumMulti(vector<int>& arr, int target) {
        int ans=0;
        for(int i=0;i<arr.size();i++){
            unordered_map<int,int>mpp;
            for(int j=i+1;j<arr.size();j++){
                int res=target-(arr[i]+arr[j]);
                if(mpp.find(res)!=mpp.end()){
                    ans=(ans+mpp[res])%mod;
                }
                mpp[arr[j]]++;
            }
        }
        return ans%mod;
    }
};