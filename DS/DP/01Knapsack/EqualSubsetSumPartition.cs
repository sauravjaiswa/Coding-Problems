// https://leetcode.com/problems/partition-equal-subset-sum/description/

public class Solution {
    public bool CanPartition(int[] nums) {
        var n = nums.Length;
        var sum = 0;
        foreach(var num in nums){
            sum += num;
        }

        if(sum % 2 != 0){
            return false;
        }

        return SubsetSum(nums, sum/2, n);
    }

    public bool SubsetSum(int[] nums, int sum, int n) {
        var dp = new bool[n + 1][];
        for(var i = 0; i <= n; i++){
            dp[i] = new bool[sum + 1];
            dp[i][0] = true;
        }

        for(var i = 1; i <= n; i++){
            for(var j = 1; j <= sum; j++){
                if(nums[i - 1] <= j){
                    dp[i][j] = dp[i - 1][j - nums[i - 1]] || dp[i - 1][j];
                }
                else{
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        return dp[n][sum];
    }
}