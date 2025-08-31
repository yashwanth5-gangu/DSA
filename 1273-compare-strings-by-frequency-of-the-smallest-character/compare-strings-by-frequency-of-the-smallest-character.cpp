class Solution {
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
      vector<int>que,wor;
      for(int i=0;i<queries.size();i++){
       
      sort(queries[i].begin(),queries[i].end());
      int count=1;
      char smallest=queries[i][0];
      for(int j=0;j<queries[i].size();j++){
           if(queries[i][j]==smallest){
            count++;
           
           }
           else{
           
            break;
           }
      }
     que.push_back(count);
      }
      
 for(int i=0;i<words.size();i++){
       
      sort(words[i].begin(),words[i].end());
      int count=1;
      char smallest=words[i][0];
      for(int j=0;j<words[i].size();j++){
        
           if(words[i][j]==smallest){
           count++;
           
           }
          
           else{
            break;
           }
      }
     wor.push_back(count);
      }

      int n=queries.size();
      vector<int>ans(n);
    
   for(int i=0;i<que.size();i++){
    int count=0;
    for(int j=0;j<wor.size();j++){
        if(que[i]<wor[j]){
            count++;
        }
    }
    ans[i]=count;
   }
    return ans;
    
    }
};