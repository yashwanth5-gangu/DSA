class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int firstx=ax2-(ax1);
        int firsty=ay2-(ay1);
        int totalfirst=firstx*firsty;
        int secondx=bx2-(bx1);
        int secondy=by2-(by1);
        int totalsecond=secondx*secondy;
      int overlapWidth  = max(0, min(ax2, bx2) - max(ax1, bx1));
        int overlapHeight = max(0, min(ay2, by2) - max(ay1, by1));
        int overlapArea = overlapWidth * overlapHeight;
        return totalfirst+totalsecond-overlapArea;
    }
};