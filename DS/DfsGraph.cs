class Solution {
    // Function to return a list containing the DFS traversal of the graph.
    public List<int> dfs(List<List<int>> adj) {
        // Code here
        var v = adj.Count();
        var visited = new bool[v];
        var res = new List<int>();
        
        DfsUtil(adj, visited, 0, res);
        
        return res;
    }
    
    private void DfsUtil(List<List<int>> adj, bool[] visited, int s, List<int> res){
        visited[s] = true;
        res.Add(s);
        
        foreach(var node in adj[s]){
            if(!visited[node]){
                DfsUtil(adj, visited, node, res);
            }
        }
    }
}