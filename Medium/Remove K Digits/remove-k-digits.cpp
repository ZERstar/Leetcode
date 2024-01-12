//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string removeKdigits(string s, int k) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            while(st.size()>0 and k>0 and st.top()>s[i]){
                st.pop();
                k--;
            }
            st.push(s[i]);
        }
        while(st.size()>0 and k>0){
            k--;
            st.pop();
        }
        string ans = "";
        while(st.size()>0){
            char ch = st.top();
            st.pop();
            ans.push_back(ch);
        }
        reverse(begin(ans), end(ans));
        int j=0;
        while(ans[j]=='0' and ans.size()>1){
            j++;
        }
        if(j!=0 and j<ans.size()){
            return ans.substr(j);
        }
        if(j==ans.size()){
            return "0";
        }
        if(ans=="") return "0";
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;
        Solution obj;
        cout << obj.removeKdigits(S, K) << endl;
    }
    return 0;
}

// } Driver Code Ends