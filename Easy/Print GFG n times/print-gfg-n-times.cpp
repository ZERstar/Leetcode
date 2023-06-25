//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void printGfg(int n) {
        // Code here
        if(n==0) return;
        printGfg(n-1);
        cout<<"GFG"<<" ";
    }
};


//{ Driver Code Starts.
/* Driver program to test printNos */
int main() {
    int T;

    // taking testcases
    cin >> T;

    while (T--) {
        int N;

        // input N
        cin >> N;
        Solution ob;
        // calling printNos() function
        ob.printGfg(N);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends