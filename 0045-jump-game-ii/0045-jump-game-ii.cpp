class Solution {
public:
    int jump(vector<int>& nums) {
        int jump=0, maxSoFar=0, currentMax=0;
        for(int i=0;i<nums.size()-1;i++){
            maxSoFar = max(maxSoFar, i+nums[i]);
            if(i==currentMax){
                jump++;
                currentMax=maxSoFar;
            }
        }
        return jump;
    }
};