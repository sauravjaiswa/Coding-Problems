public class Solution {
    public int NumIslands(char[][] grid) {
        var m = grid.Length;
        var n = grid[0].Length;
        var cnt = 0;
        
        for(var i = 0; i < m; i++){
            for(var j = 0; j < n; j++){
                if(grid[i][j] == '1'){
                    Dfs(grid, m, n, i, j);
                    cnt++;
                }
            }
        }
        
        return cnt;
    }
    
    private static void Dfs(char[][] grid, int m, int n, int r, int c){
        if(r < 0 || c < 0 || r > m - 1 || c > n - 1 || grid[r][c] == '0'){
            return;
        }
        
        grid[r][c] = '0';
        
        var rDirs = new int[]{-1, 1, 0, 0};
        var cDirs = new int[]{0, 0, -1, 1};
        
        for(var i = 0; i < 4; i++){
            if(IsSafe(grid, m, n, r + rDirs[i], c + cDirs[i])){
                Dfs(grid, m, n, r + rDirs[i], c + cDirs[i]);
            }
        }
    }
    
    private static bool IsSafe(char[][] grid, int m, int n, int r, int c) {
        return (r >= 0 && r < m && c >= 0 && c < n && grid[r][c] == '1');
    }
}