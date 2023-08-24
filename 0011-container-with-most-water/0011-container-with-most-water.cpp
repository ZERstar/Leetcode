class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int h=height.size()-1;
        int maxArea = 0;
        while(l<h){
            int currentArea = min(height[l],height[h]) * (h - l);
            maxArea = max(maxArea, currentArea);
            if(height[l]<height[h]){
                l++;
            }
            else{
                h--;
            }
        }
        return maxArea;
    }
};
