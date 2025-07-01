// https://leetcode.com/problems/number-of-provinces/

public class Solution {
    public int FindCircleNum(int[][] isConnected) {
        var n = isConnected.Length;
        var visited = new bool[n + 1];
        var provinces = 0;

        for(var i = 1; i < n + 1; i++){
            if(!visited[i]){
                DfsUtil(isConnected, visited, i, n);
                provinces++;
            }
        }

        return provinces;
    }

    private void DfsUtil(int[][] isConnected, bool[] visited, int src, int n){
        visited[src] = true;

        for(var j = 0; j < n; j++){
            if(isConnected[src - 1][j] == 1 && !visited[j + 1]){
                visited[j + 1] = true;
                DfsUtil(isConnected, visited, j + 1, n);
            }
        }
    }
}