// Online C# Editor for free
// Write, Edit and Run your C# code using C# Online Compiler
/*
Input : ((() 
Output : 2 
Explanation : () 

Input: )()()) 
Output : 4 
Explanation: ()() 

Input:  ()(())))) 
Output: 6 
Explanation:  ()(())

Input:  ()(()))))() 
Output: 6 
Explanation:  ()(())
*/

/*
public class Circle
{
    public double Circumference(Func<double, double> op)
    {
        return op(6);
    }
}
 
var c = circle.Circumference((double r) => 2 * 3.14 * r);

Console.WriteLine(c);
*/

using System;

public class HelloWorld
{
    public static void Main(string[] args)
    {
        CalculateLongestPattern("((((((()(()))))()");
        CalculateLongestPattern("(((()))()");
        CalculateLongestPattern("((()");
        CalculateLongestPattern(")()())");
        CalculateLongestPattern("()(()))))");
        CalculateLongestPattern("()(()))))()");
    }
    
    private static void CalculateLongestPattern(string input)
    {
        var seqCnt = 0;
        var totalCnt = 0;
        var maxi = 0;
        foreach(var ch in input){
            if(ch == '('){
                seqCnt++;
            }
            else{
                seqCnt--;
            }
            if(seqCnt >= 0){
                totalCnt++;
                if(seqCnt == 0){
                    maxi = Math.Max(maxi, totalCnt);
                }
            }
            else{
                totalCnt = 0;
                seqCnt = 0;
            }
        }

        seqCnt = 0;
        totalCnt = 0;
        for(var i = input.Length - 1; i >= 0; i--){
            var ch = input[i];
            if(ch == ')'){
                seqCnt++;
            }
            else{
                seqCnt--;
            }

            if(seqCnt >= 0){
                totalCnt++;
                if(seqCnt == 0){
                    maxi = Math.Max(maxi, totalCnt);
                }
            }
            else{
                totalCnt = 0;
                seqCnt = 0;
            }
        }
        
        Console.WriteLine("OUTPUT: " + maxi);
    }
}