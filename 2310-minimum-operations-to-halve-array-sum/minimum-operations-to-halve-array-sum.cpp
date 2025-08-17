class Solution {
public:
    int halveArray(vector<int>& nums) {
        priority_queue<double>pq;
        int count=0;
        double sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            pq.push(nums[i]);

        }
        double target=sum/2;
        while(sum>target){
            count++;
            double t=pq.top()/2;
            sum-=pq.top();
            pq.pop();
            sum+=t;
            pq.push(t);

        }
        return count;
        
    }
};