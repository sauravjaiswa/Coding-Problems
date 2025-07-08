// https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1

class Solution {

    static Boolean isSubsetSum(int nums[], int k) {
        // code here
        int n = nums.length;
        boolean[][] dp = new boolean[k + 1][n + 1];
        for(int i = 0; i <= k; i++){
            Arrays.fill(dp[i], false);
        }
        return SubarraySumUtil(nums, k, n, dp);
    }
    
    private static boolean SubarraySumUtil(int[] nums, int k, int n, boolean[][] dp) {
        if(k == 0){
            return true;
        }
        
        if(n == 0){
            return false;
        }
        
        if(dp[k][n]){
            return dp[k][n];
        }

        if(nums[n - 1] <= k){
            return dp[k][n] = (SubarraySumUtil(nums, k - nums[n - 1], n - 1, dp) || SubarraySumUtil(nums, k, n - 1, dp));
        }

        return dp[k][n] = SubarraySumUtil(nums, k, n - 1, dp);
    }
}