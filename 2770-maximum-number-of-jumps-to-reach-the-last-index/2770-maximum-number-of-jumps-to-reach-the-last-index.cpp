class Solution {
public:
    int jump(int idx, vector<int>& memo, vector<int>& nums, int target) {
         
        if (idx == nums.size()-1)
            return 0;
         
        if (memo[idx] != -1)
            return memo[idx];
         
        int maxjumps = INT_MIN;

        for (int j = idx + 1; j < nums.size(); j++) {

            if (abs(nums[j] - nums[idx]) <= target) {

                maxjumps = max(maxjumps, 1 + jump(j, memo, nums, target));
            }
        }
         
        return memo[idx] = maxjumps;
    }
     

    int maximumJumps(vector<int>& nums, int target) {
        vector<int> memo(nums.size(), -1);
        int ans = jump(0, memo, nums, target);
        return ans < 0 ? -1 : ans;
    } 

};