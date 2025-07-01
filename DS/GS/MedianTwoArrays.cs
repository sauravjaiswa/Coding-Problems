// https://leetcode.com/problems/median-of-two-sorted-arrays/description/

public class Solution {
    public double FindMedianSortedArrays(int[] nums1, int[] nums2) {
        var m = nums1.Length;
        var n = nums2.Length;
        var res = new int[m + n];
        var i = 0;
        var j = 0;
        var k = 0;

        while(i < m && j < n){
            if(nums1[i] < nums2[j]){
                res[k] = nums1[i++];
            }
            else{
                res[k] = nums2[j++];
            }

            k++;
        }

        while(i < m){
            res[k++] = nums1[i++];
        }

        while(j < n){
            res[k++] = nums2[j++];
        }
        
        var mid = k / 2;
        if(k % 2 == 0){
            return (res[mid - 1] + res[mid])/2.0d;
        }

        return res[mid];
    }
}