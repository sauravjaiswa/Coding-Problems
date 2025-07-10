// https://leetcode.com/problems/coin-change-ii/

public class Solution {
    public int Change(int amount, int[] coins) {
        var n = coins.Length;
        var dp = new int[amount + 1][];
        for(var i = 0; i<= amount; i++){
            dp[i] = new int[n + 1];
            Array.Fill(dp[i], -1);
        }
        return CalculateWays(amount, coins, n, dp);
    }

    public int CalculateWays(int amount, int[] coins, int n, int[][] dp){
        if(n == 0 || amount < 0){
            return 0;
        }
        if(amount == 0){
            return 1;
        }

        if(dp[amount][n] != -1){
            return dp[amount][n];
        }

        if(coins[n - 1] <= amount){
            return dp[amount][n] = CalculateWays(amount - coins[n - 1], coins, n, dp) + CalculateWays(amount, coins, n - 1, dp);
        }

        return dp[amount][n] = CalculateWays(amount, coins, n - 1, dp);
    }
}