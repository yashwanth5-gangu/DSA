class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>>maxheap;
        for(int i=0;i<arr.size();i++){
            pair<int,int>p={abs(arr[i]-x),arr[i]};
             maxheap.push(p);
            while(maxheap.size()>k){
                  maxheap.pop();
            }
           
        }
        vector<int>ans;
       
         while(!maxheap.empty()){
            ans.push_back(maxheap.top().second);
            maxheap.pop();
            
         }
         sort(ans.begin(),ans.end());
         return ans;
    }
};