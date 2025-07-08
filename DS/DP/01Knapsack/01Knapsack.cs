// https://www.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1

class Solution {
    static int knapsack(int W, int val[], int wt[]) {
        // code here
        int m = W;
        int n = wt.length;
        int[][] dp = new int[m + 1][n + 1];
        for(int i = 0; i <= m; i++){
            Arrays.fill(dp[i], -1);
        }
        return knapsackUtil(W, val, wt, wt.length, dp);
    }
    
    private static int knapsackUtil(int W, int val[], int wt[], int n, int dp[][]) {
        // code here
        if(W == 0 || n == 0){
            return 0;
        }
        
        if(dp[W][n] >= 0){
            return dp[W][n];
        }
        
        if(wt[n - 1] <= W){
            return dp[W][n] = Math.max(val[n - 1] + knapsackUtil(W - wt[n - 1], val, wt, n - 1, dp), knapsackUtil(W, val, wt, n - 1, dp));
        }
        
        return dp[W][n] = knapsackUtil(W, val, wt, n - 1, dp);
    }
}
