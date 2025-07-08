// https://www.geeksforgeeks.org/interview-experiences/goldman-sachs-interview-preparation/
// https://leetcode.com/problems/super-egg-drop/

public class Solution {
    public int SuperEggDrop(int k, int n) {
        var dp = new int[k + 1][];
        for(var i = 0; i < k + 1; i++){
            dp[i] = new int[n + 1];
            Array.Fill(dp[i], -1);
        }
        return SuperEggDropRec(k, n, dp);
    }

    private int SuperEggDropRec(int k, int n, int[][] dp){
        if(k == 1 || n == 0 || n == 1){
            return n;
        }

        if(dp[k][n] != -1){
            return dp[k][n];
        }

        var mini = Int32.MaxValue;
        var l = 1;
        var r = n;

        while(l <= r){
            var mid = (l + r)/2;
            var left = SuperEggDropRec(k - 1, mid - 1, dp);
            var right = SuperEggDropRec(k, n - mid, dp);
            var temp = 1 + Math.Max(left, right);
            if(left < right){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
            mini = Math.Min(mini, temp);
        }

        return dp[k][n] = mini;
    }
}