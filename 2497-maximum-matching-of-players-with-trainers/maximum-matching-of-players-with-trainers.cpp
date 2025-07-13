class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int n=players.size();
        int y=trainers.size();
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int count=0;
        int i=0;
        int j=0;
        while(i<n  && j<y){
            if(players[i]<=trainers[j]){
                i++;
                j++;
                count++;
            }
            else if(players[i]>trainers[j]){
                j++;
            }
            else{
                i++;
            }
        }
        return count;
    }
};