class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int count=0;
        int j=1;
        int i=0;
        int n=nums.size();
        while(i<n && j+1<n){
            if(nums[i]<nums[j] && nums[j]>nums[j+1]){
                count++;
                i=j;
                j++;

            }
            else if(nums[j]<nums[i] && nums[j]<nums[j+1]){
                count++;
                i=j;
                j++;
            }
            else{
                j++;
            }
        }
        return count;
    }
};