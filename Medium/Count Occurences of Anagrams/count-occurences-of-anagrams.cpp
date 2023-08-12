//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:

    bool allZero(vector<int> &counter){
        for(int &i : counter){
            if(i != 0) {
                return false;
            }
        }
         return true;
    }
    
	int search(string pat, string txt) {
	    // code here
	    int n = txt.size();
	    
	    vector<int> counter(26,0);
	    for(int i=0;i<pat.length();i++){
	        char ch = pat[i];
	        counter[ch-'a']++;
	    }
	    int i=0,j=0;
	    int ans=0;
	    int k = pat.size();
	    while(j<n){
	        counter[txt[j] - 'a']--;
	        if(j - i + 1 == k){
	            if(allZero(counter)) {
	                ans++;
	                
	            }
	            counter[txt[i] - 'a']++;
	            i++;
	        }
	        j++;
	    }
	    return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends