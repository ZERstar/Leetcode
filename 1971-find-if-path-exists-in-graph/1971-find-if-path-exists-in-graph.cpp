class Solution {
public:
    
    bool dfs(vector<vector<int>>&graph, vector<int>&visited, int c, int e){
        if(c==e)
            return true;
        
        if(visited[c])
            return false;
        
        
        visited[c]=1;
        
        for(int i=0;i<graph[c].size();i++){
            if(dfs(graph, visited, graph[c][i], e ))
                return true;
        }
            
            return false;
        
    }
    
    
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>graph(n);
        for(int i=0;i<edges.size();i++){
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int> visited(n,0);
        return dfs(graph, visited, source, destination);
    }
};