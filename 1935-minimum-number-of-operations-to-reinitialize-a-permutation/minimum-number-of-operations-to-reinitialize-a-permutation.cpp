class Solution {
public:

    int reinitializePermutation(int n) {
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            arr[i]=i;
        }
        int count=0;
        bool flag=true;
    
        while(flag){
            vector<int>perm(n);
            for(int i=0;i<n;i++){
                if(i%2==0){
                    perm[i]=arr[i/2];
                }
                else{
                    perm[i]=arr[n/2+(i-1)/2];
                }
            }
            count++;
           arr=perm;
           if(arr[1]==1)break;
         
        }
        return count;
    }
};