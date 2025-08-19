class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {

        int n = nums.size();
        long long  count = 0;
        long long  count1 = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                count++;
            } else {
                while (count > 0) {

                    count1 += count;
                    count--;
                }
            }
        }
        while(count>0){
            count1+=count;
            count--;
        }
    
    return count1;
}
};
