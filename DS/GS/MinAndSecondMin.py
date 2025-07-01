# https://www.geeksforgeeks.org/problems/find-the-smallest-and-second-smallest-element-in-an-array3226/1

class Solution:
    def minAnd2ndMin(self, arr):
        #code here
        if len(arr) < 2:
            return [-1]

        smallest = 1000000
        secondSmallest = 1000000
        
        for ele in arr:
            if ele < smallest:
                secondSmallest = smallest
                smallest = ele
            elif ele < secondSmallest and ele != smallest:
                secondSmallest = ele
        
        if secondSmallest == 1000000:
            return [-1]
        return [smallest, secondSmallest]