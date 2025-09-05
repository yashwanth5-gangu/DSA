class Solution {
public:
    int makeTheIntegerZero(int num1, int num2) {
        for(int i=1;i<=60;i++){
            long long  val=(long long)num1-1LL *i*num2;
            if(val<0)return -1;
            int t=__builtin_popcountll(val);
            if(t<=i && i<=val){
                return i;
            
            }
        }
        return -1;
    }
};