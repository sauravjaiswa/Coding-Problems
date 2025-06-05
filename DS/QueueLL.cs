// Online C# Editor for free
// Write, Edit and Run your C# code using C# Online Compiler
// Implement Queue using LL
// Enqueue
// Dequeue
// Peek

using System;

public class HelloWorld
{
    public static void Main(string[] args)
    {
        var q = new Queue<int>();
        q.Enqueue(1);
        q.Enqueue(2);
        q.Enqueue(3);
        Console.WriteLine("Count: " + q.Count());
        Console.WriteLine("Dequeue: " + q.Dequeue());
        Console.WriteLine("Count: " + q.Count());
        Console.WriteLine("Dequeue: " + q.Dequeue());
        Console.WriteLine("Count: " + q.Count());
        Console.WriteLine("Peek: " + q.Peek());
        Console.WriteLine("Count: " + q.Count());
        Console.WriteLine("Dequeue: " + q.Dequeue());
        Console.WriteLine("Count: " + q.Count());
        Console.WriteLine("Peek: " + q.Peek());
    }
}

public class Queue<T>
{
    private Node<T> front;
    private Node<T> rear;
    private int cnt;
    
    public Queue()
    {
        front = rear = null;
        cnt = 0;
    }
    
    public void Enqueue(T val)
    {
        var node = new Node<T>(val);
        
        if(front == null && rear == null)
        {
            front = rear = node;
        }
        else
        {
            rear.Next = node;
            node.Prev = rear;
            rear = node;
        }
        
        cnt++;
    }
    
    public T Dequeue()
    {
        if(front == rear == null)
        {
            throw new InvalidOperationException("Queue underflow");
        }
        
        var removingVal = front.Value;
        
        if(front == rear)
        {
            front = rear = null;
        }
        else
        {
            var temp = front;
            
            front.Next.Prev = null;
            front = front.Next;
            temp = null;
        }
        
        cnt--;
        
        return removingVal;
    }
    
    public T Peek()
    {
        if(front == null && rear == null)
        {
            throw new InvalidOperationException("Queue underflow");
        }
        
        return front.Value;
    }
    
    public int Count()
    {
        return cnt;
    }
}

public class Node<T>
{
    public T Value;
    public Node<T> Next;
    public Node<T> Prev;
    
    public Node(T val)
    {
        Value = val;
        Next = Prev = null;
    }
}