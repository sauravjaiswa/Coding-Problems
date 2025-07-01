// https://leetcode.com/problems/trapping-rain-water/description/

public class Solution
{
    public int Trap(int[] height)
    {
        var n = height.Length;
        var lmax = 0;
        var rmax = 0;
        var l = 0;
        var r = n - 1;
        var water = 0;

        while (l < r)
        {
            lmax = Math.Max(lmax, height[l]);
            rmax = Math.Max(rmax, height[r]);

            if (lmax < rmax)
            {
                water += lmax - height[l];
                l++;
            }
            else
            {
                water += rmax - height[r];
                r--;
            }
        }

        return water;
    }
}