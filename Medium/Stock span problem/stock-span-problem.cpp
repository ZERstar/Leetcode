//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       vector<int> span(n);
       stack<int> s;
       s.push(0);
       
       span[0]=1;
       for(int i=1;i<n;i++){
           int currPrice = price[i];
           while(!s.empty() and price[s.top()]<=currPrice){
               s.pop();
           }
           if(!s.empty()){
               int prev_highest = s.top();
               span[i] = i - prev_highest;
           }
           else{
               span[i] = i + 1;
           }
           s.push(i);
       }
       return span;
    }
};



//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

// } Driver Code Ends