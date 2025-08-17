class Solution {
public:
    int convertTime(string current, string correct) {
       string s1=current.substr(0,2);
       string s2=current.substr(3,5);
       int t=stoi(s1);
      int t1=stoi(s2);
      string s3=correct.substr(0,2);
      string s4=correct.substr(3,5);
      int y=stoi(s3);
      int y1=stoi(s4);
    
     int z=t*60+t1;
     int z1=y*60+y1;
     
      int diff=abs(z1-z);
     
     // int diff=abs(y1-t1);
    int count=0;
       while(diff>=60){
        diff=diff-60;
        count++;
       }
       while(diff>=15){
        diff=diff-15;
        count++;
       }
        while(diff>=5){
        diff=diff-5;
        count++;
       }
        while(diff>=1){
        diff=diff-1;
        count++;
       }

       return count;
        
    }
};