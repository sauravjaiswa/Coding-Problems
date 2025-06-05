// Online C# Editor for free
// Write, Edit and Run your C# code using C# Online Compiler

using System;

public class HelloWorld
{
    public static void Main(string[] args)
    {
        Queue<int> q = new Queue<int>(2);
        
        q.Enqueue(1);
        q.Enqueue(2);
        
        Console.WriteLine($"Peeked element: {q.Peek()}");
        Console.WriteLine($"Size: {q.Size()}");
        
        Console.WriteLine($"Popped element: {q.Dequeue()}");
        Console.WriteLine($"Popped element: {q.Dequeue()}");
        
        q.Enqueue(3);
        
        Console.WriteLine($"Peeked element: {q.Peek()}");
        Console.WriteLine($"Size: {q.Size()}");
    }
}

public class Queue<T>
{
    private readonly T[] q;
    private readonly int size;
    private int rear;
    private int front;
    private int cnt;
    
    public Queue(int size)
    {
        q = new T[size];
        this.size = size;
        rear = -1;
        front = 0;
        cnt = 0;
    }
    
    private bool isFull()
    {
        return cnt == size;
    }
    
    public void Enqueue(T ele)
    {
        if(isFull())
        {
            throw new Exception("Queue overflow");
        }
        
        cnt++;
        rear = (rear + 1)%size;
        q[rear] = ele;
    }
    
    public T Dequeue()
    {
        if(cnt == 0)
        {
            throw new Exception("Queue underflow");
        }
        
        var res = q[front];
        q[front] = default(T);
        front = (front + 1) % size;
        cnt--;
        
        return res;
    }
    
    public T Peek()
    {
        if(cnt == 0)
        {
            throw new Exception("Queue underflow");
        }
        
        return q[front%size];
    }
    
    public int Size()
    {
        if(cnt == 0)
        {
            throw new Exception("Queue underflow");
        }
        
        return cnt;
    }
}