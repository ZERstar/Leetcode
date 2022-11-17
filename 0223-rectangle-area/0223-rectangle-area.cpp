class Solution {
 public:
  int overlap(int a1, int a2, int b1, int b2) {
    if (b1 <= a1 && b2 >= a2)  // interval b contains a
      return a2 - a1;
    if (a1 <= b1 && b1 <= a2)  // b1 is in a
      return min(b2, a2) - b1;
    if (a1 <= b2 && b2 <= a2)  // b2 is in a and b1 is to the left of a
      return b2 - a1;
    return 0;
  }

  int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2,
                  int by2) {
    int area_A = (ax2 - ax1) * (ay2 - ay1);
    int area_B = (bx2 - bx1) * (by2 - by1);

    int overlap_x = overlap(ax1, ax2, bx1, bx2);
    int overlap_y = overlap(ay1, ay2, by1, by2);

    return area_A + area_B - (overlap_x * overlap_y);
  }
};