//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
    void DFS(unordered_map<int, vector<int>> &adj, int u, vector<bool> &visited, vector<int> &result){
        if(visited[u] == true){
            return;
        }
        visited[u] = true;
        result.push_back(u);
        for(int &v : adj[u]){
            if(!visited[v]){
                DFS(adj , v, visited, result);
            }
        }
    }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> mp[]) {
        // Code here
        unordered_map<int, vector<int>> adj;
        for(int u=0;u<V;u++){
            
            for(auto v = mp[u].begin();v<mp[u].end();v++){
                adj[u].push_back(*v);
            }
        }
        // cout<<sizeof(adj);
        vector<int> result;
        vector<bool> visited(V,false);
        DFS(adj, 0, visited, result);
        // for(int i=0;i<result.size();i++){
        //     cout<<result[i];
        // }
        return result;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends