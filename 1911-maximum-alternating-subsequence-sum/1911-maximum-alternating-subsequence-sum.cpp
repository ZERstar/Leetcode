class Solution {
public:
    typedef long long ll;
    ll n;
    ll t[1000001][2];
    ll solve(int i, vector<int>&nums, bool flag){
        if(i >= n) return 0;
        
        if(t[i][flag] != -1){
            return t[i][flag];
        }
        
        ll skip = solve(i+1, nums, flag);
        
        ll val = nums[i];
        
        if(flag == false){
            val = -val;
        }
        
        ll take = solve(i+1, nums, !flag) + val;
        
        return t[i][flag] = max(skip, take);
    }
    
    long long maxAlternatingSum(vector<int>& nums) {
        n = nums.size();
        memset(t, -1, sizeof(t));
        return solve(0, nums, true);
    }
};