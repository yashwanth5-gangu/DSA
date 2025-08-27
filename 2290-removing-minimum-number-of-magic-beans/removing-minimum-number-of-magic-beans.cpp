class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        sort(beans.begin(),beans.end());
        long long sum=accumulate(beans.begin(),beans.end(),0ll);
        long long maxarea=0;
        int n=beans.size();
        for(int i=0;i<n;i++){
            maxarea=max(maxarea,(long long )beans[i] *(n-i));

        }
        return sum-maxarea;
    }
};