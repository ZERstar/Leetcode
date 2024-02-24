class Solution {
public:
    //int t[101];
    int n;
    vector<int>t;
    int solve(vector<int>&nums, int i, int n){
        if(i>=n) return 0;
        
        if(t[i]!=-1){
            return t[i];
        }
        
        int steal = nums[i] + solve(nums, i+2, n);
        int skip = solve(nums, i+1, n);
        
        return t[i] = max(steal, skip);
    }
    
    int rob(vector<int>& nums) {
        n = nums.size();
        //memset(t,-1,sizeof(t));
        t.assign(101,-1);
        return solve(nums, 0, n);
    }
};