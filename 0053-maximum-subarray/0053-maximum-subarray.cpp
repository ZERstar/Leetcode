class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currsum = 0;
        int n = nums.size();
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            currsum = max(nums[i], currsum+nums[i]);
            ans = max(currsum, ans);
        }
        return ans;
    }
};