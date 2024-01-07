class Solution {
public:
    int dp[100001][26];
    int solve(string &s, int k, int i, char p){
        if(i==s.size()) return 0;
        if(dp[i][p - 'a']!=-1){
            return dp[i][p - 'a'];
        }
        int skip = solve(s,k,i+1,p);
        int take= INT_MIN;
        if(abs((s[i]-'a') - (p - 'a')) <= k){
            take = 1 + solve(s,k,i+1,s[i]);
        } 
        return dp[i][p - 'a'] = max(skip,take);
    }
    
    
    int longestIdealString(string s, int k) {
        memset(dp,-1,sizeof(dp));
        int res=0;
        for(int i=0;i<s.size();i++){
            res = max(res,solve(s,k,i,s[i]));
        }
        return res;
    }
};