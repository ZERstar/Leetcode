//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n) {
        int maxReach = arr[0];
        int stepsLeft = arr[0];
        int jumps = 1;
        
        if(n<=1) return 0;
        else if(arr[0]==0) return -1;
        
        int i=1;
        while(i<n){
            if(i==n-1) return jumps;
            maxReach = max(maxReach, i+arr[i]);
            stepsLeft--;
            
            if(stepsLeft==0){
                jumps++;
                if(maxReach==i){
                    return -1;
                }
                stepsLeft = maxReach - i;
            }
            i++;
        }
        return jumps;
    }

};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends