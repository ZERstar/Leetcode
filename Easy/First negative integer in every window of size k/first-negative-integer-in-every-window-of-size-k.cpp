//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends

typedef long long ll;
vector<long long> printFirstNegativeInteger(long long int arr[], long long int N, long long int k) {
    int i=0, j = 0;
    vector<ll> ans;
    deque<ll> dq;
    while (j < N) {
        if (arr[j] < 0) {
            dq.push_back(arr[j]);
        }
        if (j - i + 1 == k) {
            if (!dq.empty()) {
                ans.push_back(dq.front());
            } else {
                ans.push_back(0);
            }
            if (arr[i] < 0 && !dq.empty()) {
                dq.pop_front();
            }
            i++;
        }
        j++;
    }
    return ans;
}

// typedef long long ll;
// vector<long long> printFirstNegativeInteger(long long int arr[], long long int N, long long int k) {
//     int i = 0, j = 0;
//     vector<ll> ans;
//     deque<ll> dq;
//     while (j < N) {
//         if (arr[j] < 0) {
//             dq.push_back(arr[j]);
//         }
//         if (j - i + 1 == k) {  // Corrected the condition
//             if (!dq.empty()) {
//                 ans.push_back(dq.front());
//             } else {
//                 ans.push_back(0);
//             }
//             if (arr[i] < 0 && !dq.empty()) {  // Check if arr[i] is in dq
//                 dq.pop_front();
//             }
//             i++;
//         }
//         j++;  // Increment j at the beginning of the loop
//     }
//     return ans;
// }
