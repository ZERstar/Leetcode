//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int findLastOccurence(string A,string B){
        //Code Here
        reverse(begin(A),end(A));
        reverse(begin(B),end(B));
        
        int n = A.size();
        int m = B.size();
        
        vector<int>lps(m);
        int i=1,j=0;
        while(i<m){
            if(B[i] == B[j]) lps[i++] = ++j;
            else if(j) j=lps[j-1];
            else lps[i++] = 0;
        }
        i=0,j=0;
        while(i<n){
                if(A[i] == B[j]){
                    i++;
                    j++;
                }
                else if(j) j = lps[j-1];
                else i++;
                if(j==m) return n-i+1;
            }
            return -1;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A>>B;
        Solution ob;
        cout<<ob.findLastOccurence(A,B)<<"\n";
        
    } 
    return 0; 
}
// } Driver Code Ends