class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
    int n = coins.size();

    vector<vector<int>> dp(n + 1, vector<int>(amount + 1, INT_MAX));
    dp[0][0] = 0;

    for (int i = 1; i <= n; i++) {
        dp[i][0] = 0;
        for (int j = 1; j <= amount; j++) {
            int coinValue = coins[i - 1];
            if (j >= coinValue && dp[i][j - coinValue] != INT_MAX) {
                dp[i][j] = min(dp[i - 1][j], dp[i][j - coinValue] + 1);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return (dp[n][amount] == INT_MAX) ? -1 : dp[n][amount];
}

};