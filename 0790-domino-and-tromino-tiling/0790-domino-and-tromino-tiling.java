class Solution {
    public int numTilings(int N) {
        int MOD = 1000000007;

        long[][] dp = new long[N + 1][3];

        dp[0][0] = 1;
        dp
        [1][0] = 1;

        for (int i = 2; i <= N; i++) {
            dp[i][0] = (dp[i - 1][0] + dp[i - 2][0] + dp[i - 1][1] + dp[i - 1][2]) % MOD;
            dp[i][1] = (dp[i - 2][0] + dp[i - 1][2]) % MOD;
            dp[i][2] = (dp[i - 2][0] + dp[i - 1][1]) % MOD;
        }
        return (int)dp[N][0];
    }
}