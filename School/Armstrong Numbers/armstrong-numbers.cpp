//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int ogNum = n;
        int numDigits = 0;
        int sum = 0;
        
        while(n>0){
            n/=10;
            numDigits++;
        }
        
        n = ogNum;
        
        while (n != 0) {
        int digit = n % 10;
        sum += pow(digit, numDigits);
        n /= 10;
        }
        if(sum == ogNum) return "Yes";
        else return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends