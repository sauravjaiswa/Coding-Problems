// Online C# Editor for free
// Write, Edit and Run your C# code using C# Online Compiler

using System;

public class Runner
{
    public static void Main(string[] args)
    {
        Stack<int> st = new Stack<int>(1000);
        
        string cont;
        do
        {
            Console.WriteLine("1 for push\n2 for pop\n3 for peek");
            var ch = Console.ReadLine();
            if(ch == "1")
            {
                Console.WriteLine("Enter element to push");
                var ele = Convert.ToInt32(Console.ReadLine());
                st.Push(ele);
            }
            else if(ch == "2")
            {
                Console.WriteLine($"Popped element {st.Pop()}");
            }
            else if(ch == "3")
            {
                Console.WriteLine($"Peeked element {st.Peek()}");
            }
            
            Console.WriteLine("Enter Y to continue");
            cont = Console.ReadLine();
        }while(cont == "Y");
    }
}

public class Stack<T>
{
    private readonly T[] stack;
    private readonly int size;
    private int start;
    private int end;
    
    public Stack(int size)
    {
        stack = new T[size];
        this.size = size;
        start = 0;
        end = -1;
    }
    
    public void Push(T ele)
    {
        if(end == size - 1)
        {
            throw new Exception("Stack overflow");
        }
        
        stack[++end] = ele;
    }
    
    public T Pop()
    {
        if(end < 0)
        {
            throw new Exception("Stack underflow");
        }
        
        var res = stack[end];
        stack[end--] = default(T);
        
        return res;
    }
    
    public T Peek()
    {
        if(end < 0)
        {
            throw new Exception("Stack underflow");
        }
        
        return stack[end];
    }
    
    public int Size()
    {
        return (end - start);
    }
}