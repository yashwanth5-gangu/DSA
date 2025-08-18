class Solution {
public:
double epsum=1e-6;
bool solve(vector<double>&cards){
    if(cards.size()==1){
        return abs(24-cards[0])<=epsum;
    }
    for(int i=0;i<cards.size();i++){
        for(int j=0;j<cards.size();j++){
            if(i==j)continue;
            else{
                vector<double>temp;
                for(int k=0;k<cards.size();k++){
         if(k!=i && k!=j){
            temp.push_back(cards[k]);
         }
                }
                double a=cards[i];
                double b=cards[j];
                vector<double>newt={a+b,a-b,b-a,a*b};
                if(abs(a)>0.0){
                    newt.push_back((double)a/b);
                }
                if(abs(b)>0.0){
                    newt.push_back((double)b/a);
                }
                for(auto & it:newt){
                    temp.push_back(it);
                    if(solve(temp)==true)return true;
                    temp.pop_back();
                }
            }
        }
    }
    return false;
}
    bool judgePoint24(vector<int>& cards) {
        vector<double>ans;
        for(int i=0;i<cards.size();i++){
            ans.push_back(1.0*cards[i]);
        }
        return solve(ans);
    }
};