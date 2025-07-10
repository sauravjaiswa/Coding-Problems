// https://leetcode.com/problems/coin-change/description/

public class Solution {
    public int CoinChange(int[] coins, int amount) {
        var n = coins.Length;
        var dp = new int[n + 1][];
        for(var i = 0; i <= n; i++){
            dp[i] = new int[amount + 1];
            Array.Fill(dp[i], -1);
        }
        var ans = CalculateCoins(coins, amount, n - 1, dp);
        return ans == Int32.MaxValue - 1 ? -1 : ans;
    }

    private int CalculateCoins(int[] coins, int amount, int n, int[][] dp){
        if(amount == 0){
            return 0;
        }

        if(n < 0 || amount < 0){
            return Int32.MaxValue - 1;
        }

        if(dp[n][amount] != -1){
            return dp[n][amount];
        }

        return dp[n][amount] = Math.Min(1 + CalculateCoins(coins, amount - coins[n], n, dp), CalculateCoins(coins, amount, n - 1, dp));
    }
}