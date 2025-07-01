//https://leetcode.com/problems/rotting-oranges/

public class Solution {
    public int OrangesRotting(int[][] grid) {
        if(grid.Length == 0){
            return 0;
        }

        var m = grid.Length;
        var n = grid[0].Length;
        var q = new Queue<(int, int)>();
        var hDir = new int[]{0, 0, 1, -1};
        var vDir = new int[]{1, -1, 0, 0};
        var time = 0;

        for(var i = 0; i < m; i++){
            for(var j = 0; j < n; j++){
                if(grid[i][j] == 2){
                    q.Enqueue((i, j));
                }
            }
        }

        while(q.Any()){
            time++;
            var cnt = q.Count();
            while(cnt-- > 0){
                var curr = q.Dequeue();
                var r = curr.Item1;
                var c = curr.Item2;

                for(var i = 0; i < 4; i++){
                    var x = r + hDir[i];
                    var y = c + vDir[i];

                    if(IsSafe(x, y, m, n) && grid[x][y] == 1){
                        grid[x][y] = 2;
                        q.Enqueue((x, y));
                    }
                }
            }
        }

        for(var i = 0; i < m; i++){
            for(var j = 0; j < n; j++){
                if(grid[i][j] == 1){
                    return -1;
                }
            }
        }

        return Math.Max(0, time - 1);
    }

    private bool IsSafe(int i, int j, int m, int n){
        return i >= 0 && i < m && j >= 0 && j < n;
    }
}