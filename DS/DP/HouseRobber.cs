//https://www.geeksforgeeks.org/problems/stickler-theif-1587115621/1

class Solution {
    public int FindMaxSum(int[] arr) {
        // code here
        var n = arr.Length;
        var dp = new int[n + 1];
        
        return FindMaxSumRec(arr, n, dp);
    }
    
    private int FindMaxSumRec(int[] arr, int n, int[] dp){
        if(n == 0){
            return 0;
        }
        
        if(n == 1){
            return arr[n - 1];
        }
        
        if(dp[n] != 0){
            return dp[n];
        }
        
        return dp[n] = Math.Max(arr[n - 1] + FindMaxSumRec(arr, n - 2, dp), FindMaxSumRec(arr, n - 1, dp));
    }
}
