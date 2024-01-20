//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        void computeLPS(string &pat, vector<int> &LPS, int m){
            int len =0;
            LPS[0]=0;
            int i=1;
            while(i<m){
                if(pat[i] == pat[len]){
                    len++;
                    LPS[i] = len;
                    i++;
                }else{
                    if(len != 0){
                        len = LPS[len-1];
                    }else{
                        LPS[i] = 0;
                        i++;
                    }
                }
            }
        }
    
    
    
        vector <int> search(string pat, string txt)
        {
            //code here
            int n = txt.length();
            int m = pat.length();
            vector<int> result;
            
            vector<int> LPS(m,0);
            computeLPS(pat,LPS,m);
            
            int i=0;
            int j=0;
            while(i<n){
                if(txt[i] == pat[j]){
                    i++;
                    j++;
                }
                if(j==m){
                    result.push_back(i - m + 1);
                    j = LPS[j-1];
                }else if(txt[i] != pat[j]){
                    if(j!=0){
                        j = LPS[j-1];
                    }else{
                        i++;
                    }
                }
            }
            return result;
        }
     
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        if (res.size()==0)
            cout<<-1<<endl;
        else {
            for (int i : res) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends