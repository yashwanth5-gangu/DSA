class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {

        int n = nums.size();
        long long  count = 0;
        long long  count1 = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                count++;
                count1+=count;
            } else {
               count=0;
            }
        }
       
    
    return count1;
}
};
