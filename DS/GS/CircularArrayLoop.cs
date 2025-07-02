// https://leetcode.com/problems/circular-array-loop/description/

public class Solution {
    public bool CircularArrayLoop(int[] nums) {
        var n = nums.Length;
        
        for(var i = 0; i < n; i++){
            var slow = i;
            var fast = getNextIndex(nums, i, n);

            while(nums[slow] * nums[fast] > 0 && nums[slow] * nums[getNextIndex(nums, fast, n)] > 0){
                if(slow == fast){
                    if(slow != getNextIndex(nums, slow, n)){
                        return true;
                    }
                    break;
                }

                slow = getNextIndex(nums, slow, n);
                fast = getNextIndex(nums, getNextIndex(nums, fast, n), n);
            }
        }

        return false;
    }

    private int getNextIndex(int[] nums, int index, int n){
        return (((index + nums[index]) % n) + n) % n;
    }
}