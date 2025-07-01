class Solution {
    // Returns shortest distances from src to all other vertices
    public int[] dijkstra(int V, int[,] edges, int src) {
        // Code here
        var adj = new List<(int, int)>();
        
        for(var i = 0; i < V; i++){
            var u = edges[i, 0];
            var v = edges[i, 1];
            var w = edges[i, 2];
            
            adj[u].Add((v, w));
            adj[v].Add((u, w));
        }
        
        var dist = new int[V];
        var vis = new bool[V];
        
        for(var i = 0; i < V; i++){
            dist[i] = Int32.MaxValue;
        }
        
        dist[src] = 0;
        
        var pq = new PriorityQueue<int, int>();
        pq.Enqueue(0, src);
        
        while(pq.Any()){
            var nodeInfo = pq.Dequeue();
            
            
        }
    }
}