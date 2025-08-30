class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string>ans;
        int mini=INT_MAX;
        for(int i=0;i<list1.size();i++){
            for(int j=0;j<list2.size();j++){
            if( list1[i]==list2[j] ){
                //ans.push_back(list1[i]);
                mini=min(mini,i+j);
             }
            }
        }
        for(int i=0;i<list1.size();i++){
            for(int j=0;j<list2.size();j++){
            if( list1[i]==list2[j] && (i+j)==mini ){
                ans.push_back(list1[i]);
              //  mini=min(mini,i+j);
             }
            }
        }
        return ans;
    }
};