//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void subf(int idx, int sum, vector<int>&arr, int N, vector<int>&sumSet){
        if(idx == N) {
            sumSet.push_back(sum);
            return;
        }
        subf(idx+1,sum+arr[idx],arr,N,sumSet);
        subf(idx+1,sum,arr,N,sumSet);
    }
    
    
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> sumSet;
        subf(0,0,arr,N,sumSet);
        sort(sumSet.begin(),sumSet.end());
        return sumSet;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends