// User function Template for C#

class Solution {
    // Complete this function
    public int maxBinTreeGCD(List<List<int>> arr, int N) {
        // Your code here
        var maxGcd = 0;
        arr.Sort(Compare);
        
        for(var i = 0; i < arr.Count() - 1; i++){
            if(arr[i][0] == arr[i + 1][0]){
                maxGcd = Math.Max(maxGcd, Gcd(arr[i][1], arr[i + 1][1]));
                i++;
            }
            else{
                maxGcd = Math.Max(maxGcd, 0);
            }
        }
        
        return maxGcd;
    }
    
    private int Gcd(int a, int b){
        var min = Math.Min(a, b);
        
        for(var i = min; i > 0; i--){
            if(a % i == 0 && b % i == 0){
                return i;
            }
        }
        
        return -1;
    }
    
    private static int Compare(List<int> x, List<int> y)
    {
        return x[0].CompareTo(y[0]);
    }
}