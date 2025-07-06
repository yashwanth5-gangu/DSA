class FindSumPairs {
public:
vector<int>nums1,nums2;
map<int,int>mpp;

    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        this->nums1=nums1;
        this->nums2=nums2;
        for(auto &it:nums2){
            mpp[it]++;
        }

    }
    
    void add(int index, int val) {
        mpp[nums2[index]]--;
        nums2[index]+=val;
        mpp[nums2[index]]++;

        
    }
    
    int count(int tot) {
      int cou=0;
      for(int i=0;i<nums1.size();i++){
        int y=tot-nums1[i];
        cou+=mpp[y];
      }
    
        return cou;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */