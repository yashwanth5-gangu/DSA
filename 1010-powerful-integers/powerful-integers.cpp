class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        set<int>st;
        for(int i=0;i<=100;i++){
            for(int j=0;j<=100;j++){
                if(pow(x,i)+pow(y,j)>bound)break;
                if(pow(x,i)+pow(y,j)<=bound){
                    st.insert(pow(x,i)+pow(y,j));
                }
                
            }
        }
        vector<int>ans={st.begin(),st.end()};
        return ans;
    }
};