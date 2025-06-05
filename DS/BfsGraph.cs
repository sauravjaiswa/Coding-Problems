public class Solution {
    // Function to return Breadth First Search Traversal of the given graph.
    public List<int> bfs(List<List<int>> adj) {
        // code here
        var v = adj.Count();
        var visited = new bool[v];
        var res = new List<int>();
        
        BfsUtil(adj, visited, res);
        
        return res;
    }
    
    private void BfsUtil(List<List<int>> adj, bool[] visited, List<int> res){
        var q = new Queue<int>();
        q.Enqueue(0);
        visited[0] = true;
        
        while(q.Any()){
            var curr = q.Dequeue();
            res.Add(curr);
            
            foreach(var node in adj[curr]){
                if(!visited[node]){
                    visited[node] = true;
                    q.Enqueue(node);
                }
            }
        }
    }
}