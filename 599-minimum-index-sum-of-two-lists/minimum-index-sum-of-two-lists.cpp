class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string>ans;
        unordered_map<string,int>mpp;
        for(int i=0;i<list1.size();i++){
            mpp[list1[i]]=i;
        }
        int maxi=INT_MAX;
        for(int j=0;j<list2.size();j++){
        
          if(mpp.find(list2[j])!=mpp.end()){
              int sum=j+mpp[list2[j]];
            if(sum<maxi){
                ans.clear();
                ans.push_back(list2[j]);
                maxi=sum;
            }
            else if (sum==maxi){
                ans.push_back(list2[j]);
            }
          }
        }
        return ans;
    }
};