//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    
    long long countChange(int arr[], int ind, int T, vector<vector<long>>& dp) {
        if(ind==0) return (T % arr[0]==0);
        
        if(dp[ind][T]!=-1) return dp[ind][T];
        
        long notTaken = countChange(arr,ind-1,T,dp);
        
        long taken=0;
        if(arr[ind] <= T) taken = countChange(arr, ind, T - arr[ind], dp);
        
        return dp[ind][T] = notTaken + taken;
    }
  
  
    long long int count(int arr[], int n, int T) {

        vector<vector<long>> dp(n, vector<long>(T+1, -1));
        
        return countChange(arr, n-1, T, dp);
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends