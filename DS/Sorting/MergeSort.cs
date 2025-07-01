// Online C# Editor for free
// Write, Edit and Run your C# code using C# Online Compiler
/*
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
Example 2:

Input: nums = [2,0,1]
Output: [0,1,2]

Constraints:
n == nums.length
1 <= n <= 300
nums[i] is either 0, 1, or 2.

Follow up: Could you come up with a one-pass algorithm using only constant extra space?
*/
using System;

public class MergeSort
{
    public static void Main(string[] args)
    {
        SortColors(new int[] {1,1,0,2,0,0,2,2});
    }
    
    public static void SortColors(int[] nums) {
        var n = nums.Length;
        
        MergeSort(nums, 0, n - 1);
        
        foreach(var num in nums){
            Console.WriteLine(num);
        }
    }
    
    private static void Merge(int[] nums, int l, int m, int r){
        var n1 = m - l + 1;
        var n2 = r - m;
        
        var larr = new int[n1];
        var rarr = new int[n2];
        
        for(var x = 0; x < n1; x++){
            larr[x] = nums[l + x];
        }
        
        for(var x = 0; x < n2; x++){
            rarr[x] = nums[m + 1 + x];
        }
        
        var i = 0;
        var j = 0;
        var k = l;
        
        while(i < n1 && j < n2){
            if(larr[i] < rarr[j]){
                nums[k++] = larr[i++];
            }
            else{
                nums[k++] = rarr[j++];
            }
        }
        
        while(i < n1){
            nums[k++] = larr[i++];
        }
        
        while(j < n2){
            nums[k++] = rarr[j++];
        }
    }
    
    private static void MergeSort(int[] nums, int l, int r){
        if(l < r){
            var m = l + (r - l)/2;
            
            MergeSort(nums, l, m);
            MergeSort(nums, m + 1, r);
            
            Merge(nums, l, m, r);
        }
    }
}