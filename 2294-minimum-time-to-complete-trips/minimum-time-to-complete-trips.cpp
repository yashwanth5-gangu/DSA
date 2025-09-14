class Solution {
public:
bool func(long long  mid,long long  totalTrips,vector<int>&time){
    long long  count=0;
    for(int i=0;i<time.size();i++){
        count+=mid/time[i];
        if(count>=totalTrips)return true;
    }
    return count>=totalTrips;

}
    long long minimumTime(vector<int>& time, int totalTrips) {
      
        long long  l=1;
        long long  r=(long long )*min_element(time.begin(),time.end()) * totalTrips;
        long long  maxi=r;
        while(l<=r){
            long long  mid=l+(r-l)/2;
            if(func(mid,totalTrips,time)){
                maxi=min(maxi,mid);
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return maxi;
    }
};