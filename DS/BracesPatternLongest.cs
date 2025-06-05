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
        var start = 0;
        var curr = 0;
        var maxi = 0;
        
        foreach(var ch in input){
            if(ch == '('){
                start++;
                curr++;
            }
            else if (ch == ')') {
                if(start > 0){
                    start--;
                    curr++;
                }
                else {
                    maxi = Math.Max(maxi, curr);
                    curr = 0;
                    start = 0;
                }
            }
        }
        
        if(start > 0 && maxi == 0)
        {
            maxi = input.Length - start;
        }
        
        Console.WriteLine("OUTPUT: " + maxi);
    }
}