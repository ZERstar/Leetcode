//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> nearestPerfectSquare(int N) {
        // code here
        vector<int> ans;
        long long int fl = floor(sqrt(N));
        long long int cl = ceil(sqrt(N));
        long long int a1 = fl * fl;
        long long int a2 = cl * cl;
        if(a2 - N < N - a1){
            ans.push_back(a2);
            ans.push_back(abs(a2 - N));
        }else{
            ans.push_back(a1);
            ans.push_back(abs(a1 - N));
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> ans = ob.nearestPerfectSquare(N);
        cout << ans[0] << " " << ans[1] << "\n";
    }
}
// } Driver Code Ends