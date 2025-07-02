// https://leetcode.com/problems/merge-intervals/description/

public class Solution {
    public int[][] Merge(int[][] intervals) {
        Array.Sort(intervals, (a, b) => a[0].CompareTo(b[0]));
        var n = intervals.Length;
        var start = intervals[0][0];
        var end = intervals[0][1];
        var res = new List<int[]>();

        for(var i = 1; i < n; i++){
            
            if(intervals[i][0] <= end){
                end = Math.Max(end, intervals[i][1]);
            }
            else{
                res.Add(new int[]{start, end});
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }

        res.Add(new int[]{start, end});

        return res.ToArray();
    }
}