class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int t=m+n;
       vector<int>ans;
        int i=m;
        int j=0;
        while( j<n){
           nums1[i]=nums2[j];
           i++;
           j++;
        }
        sort(nums1.begin(),nums1.end());
    }
};