//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    int i = 0, j = 0;
    unordered_map<char, int> map;
    int maxi = 0;
    while (j < s.size()) {
        map[s[j]]++;
        if (map.size() < k) {
            j++;
        } else if (map.size() == k) {
            maxi = max(maxi, j - i + 1);
            j++;
        } else if (map.size() > k) {
            while (map.size() > k) {
                map[s[i]]--;
                if (map[s[i]] == 0) {
                    map.erase(s[i]);
                }
                i++;
            }
            j++;
        }
    }
    return (maxi==0)?-1:maxi;
}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends