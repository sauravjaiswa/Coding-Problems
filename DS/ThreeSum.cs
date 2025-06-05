// Online C# Editor for free
// Write, Edit and Run your C# code using C# Online Compiler
/*
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.
Example 2:

Input: nums = [0,1,1]
Output: []
Explanation: The only possible triplet does not sum up to 0.
Example 3:

Input: nums = [0,0,0]
Output: [[0,0,0]]
Explanation: The only possible triplet sums up to 0.
 

Constraints:

3 <= nums.length <= 3000
-105 <= nums[i] <= 105
*/

using System;
using System.Collections.Generic;

public class ThreeSum
{
    public static void Main(string[] args)
    {
        var input = new int[] { -1, 0, 1, 0 };

        foreach (var row in FindTripletsApproachA(input))
        {
            Console.WriteLine($"{row[0]}, {row[1]}, {row[2]}");
        }

        foreach (var row in FindTripletsApproachB(input))
        {
            Console.WriteLine($"{row[0]}, {row[1]}, {row[2]}");
        }
    }

    private static List<IList<int>> FindTripletsApproachA(int[] input)
    {
        Array.Sort(input);
        var n = input.Length;
        var res = new List<IList<int>>();

        for (var i = 0; i < n - 2; i++)
        {
            if (i > 0 && input[i] == input[i - 1])
            {
                continue;
            }

            var j = i + 1;
            var k = n - 1;

            while (j < k)
            {
                var sum = input[i] + input[j] + input[k];

                if (sum == 0)
                {
                    res.Add(new List<int>{
                        input[i], input[j], input[k]
                    });

                    while (j < k && input[j] == input[j + 1])
                    {
                        j++;
                    }
                    while (j < k && input[k] == input[k - 1])
                    {
                        k--;
                    }

                    j++;
                    k--;
                }
                else if (sum < 0)
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }

        return res;
    }
    
    public IList<IList<int>> FindTripletsApproachB(int[] input) {
        Array.Sort(input);
        var n = input.Length;
        var dict = new Dictionary<int, int>();
        var res = new List<IList<int>>();
        
        for(var i =0; i < n; i++){
            if(dict.ContainsKey(input[i])){
                dict[input[i]]++;
            }else{
                dict.Add(input[i], 1);
            }
        }
        
        for(var i = 0; i < n; i++){
            var target = -1 * input[i];
            if(i > 0 && input[i] == input[i - 1]){
                continue;
            }
            for(var j = i + 1; j < n; j++){
                if(j > i + 1 && input[j] == input[j - 1]){
                    continue;
                }
                
                var cnt = dict[input[j]];
                if(input[i] == input[j]){
                    cnt--;
                }
                if(dict.ContainsKey(target - input[j])){
                    if(target - input[j] < input[j]){
                        continue;
                    }
                    if((target - input[j] == input[j] && cnt > 1) || target - input[j] > input[j]){
                        res.Add(new List<int>{
                           input[i], input[j], target - input[j] 
                        });
                    }
                }
            }
        }
        
        return res;
    }
}