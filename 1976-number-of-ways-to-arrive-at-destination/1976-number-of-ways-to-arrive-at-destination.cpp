class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        long long mod  = (int)(1e9+7);
        vector<pair<long long ,long long>> adj[202];
        for(auto it : roads){
            long long u = it[0];
            long long v = it[1];
            long long wt = it[2];
            adj[u].push_back({v, wt});
            adj[v].push_back({u, wt});
        }
        priority_queue<pair<long long,long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>>pq;
        pq.push({0,0});
        vector<long long>ways(n,0);
        ways[0]=1;
        vector<long long>dist(n);
        for(int i=0; i<n; i++) dist[i] = 1000000000000000000;
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            long long dis = it.first;
            long long node = it.second;
            
            for(auto iter : adj[node]){
                long long adjNode = iter.first;
                long long wt = iter.second;
                
                if(wt + dis < dist[adjNode]){
                    dist[adjNode] = wt + dis;
                    ways[adjNode] = ways[node];
                    pq.push({dist[adjNode], adjNode});
                }
                else if(wt + dis == dist[adjNode]){
                    ways[adjNode] = (ways[adjNode] + ways[node]) % mod;
                }
            }
        }
        return ways[n-1];
    }
};