class Solution {
public:
    int helper(int n, vector<int>& coins, int m, vector<int>& dp){
        if(n==0){
            return 0;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        
        int ans = INT_MAX;
        for(int i=0;i<m;i++){
            if(n-coins[i]>=0){
                int subProb = helper(n-coins[i], coins, m, dp);
                if (subProb != INT_MAX) {
                    ans = min(ans, subProb + 1);
                }
            }
        }
        return dp[n] = ans;
    }
    
    
    int coinChange(vector<int>& coins, int amount) {
        int m = coins.size();
        vector<int> dp(amount+1,-1);
        int result = helper(amount, coins, m, dp);
        return (result == INT_MAX) ? -1 : result;
    }
};