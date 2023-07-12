class Solution {
private:
    bool dfsC(int node, vector<vector<int>>& adj, int vis[], int pathVis[], int check[]) {
        vis[node] = 1;
        pathVis[node] = 1;
        check[node] = 0;
        
        for (auto it : adj[node]) {
            if (!vis[it]) {
                if (dfsC(it, adj, vis, pathVis, check)) {
                    check[node] = 0;
                    return true;
                }
            } else if (pathVis[it]) {
                check[node] = 0;
                return true;
            }
        }
        
        check[node] = 1;
        pathVis[node] = 0;
        return false;
    }
    
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& adj) {
        int n = adj.size();
        vector<int> vis(n, 0);       
        vector<int> pathVis(n, 0);   
        vector<int> check(n, -1);    
        vector<int> safeNodes;
        
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                dfsC(i, adj, vis.data(), pathVis.data(), check.data()); 
            }
        }
        
        for (int i = 0; i < n; i++) {
            if (check[i] == 1) {
                safeNodes.push_back(i);
            }
        }
        
        return safeNodes;
    }
};
