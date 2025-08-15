class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
        vector<int>freq;
        freq.push_back(startTime[0]);
        for(int i=1;i<startTime.size();i++){
            freq.push_back(startTime[i]-endTime[i-1]);
        }
        freq.push_back(eventTime-endTime[endTime.size()-1]);
        long sum=0;
        long maxi=0;
        int l=0;
        int r=0;
        while(r<freq.size()){
            sum+=freq[r];
            while((r-l+1)>k+1){
                sum=sum-freq[l];
                l++;
            }
            maxi=max(maxi,sum);
            r++;
        }
        return maxi;
        
    }
};