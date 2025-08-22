class Solution {
public:
    int fillCups(vector<int>& amount) {
        priority_queue<int>mx;
        for(auto &it:amount){
            if(it!=0){
            mx.push(it);
            }
        }
        if(mx.size()==0)return 0;
        int count=0;
        while(mx.size()>1){
            int t=mx.top();
            mx.pop();
            int y=mx.top();
            mx.pop();
           if(t-1>0) mx.push(t-1);
           if(y-1>0) mx.push(y-1);
            count++;
        }
        
        if (!mx.empty()) {
    count += mx.top();
}

        return count;
        
        
    }
};