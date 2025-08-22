class Solution {
public:
    int minGroupsForValidAssignment(vector<int>& balls) {
        map<int,int> mpp;
        for(int i=0;i<balls.size();i++){
            mpp[balls[i]]++;
        }
        vector<int> ans;
        for(auto &it:mpp){
            ans.push_back(it.second);
        }
        
        sort(ans.begin(), ans.end());
        int best = INT_MAX;
        int t = ans[0];
        
        for(int j=1; j<=t; j++){
            int a = j, b = j+1;
            int num = 0;
            bool bad = false;
            
            for(int i=0; i<ans.size(); i++){
                int cur = ans[i];
                int mn = INT_MAX;
                int cnt = 0;
                
                while(cur >= 0){
                    if(cur % a == 0){
                        mn = min(mn, cnt + cur / a);
                    }
                    cur -= b;
                    cnt++;
                }
                
                if(mn == INT_MAX){
                    bad = true;
                    break;
                }
                num += mn;
            }
            
            if(!bad){
                best = min(best, num);
            }
        }
        return best;
    }
};
