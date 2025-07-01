// https://leetcode.com/problems/find-median-from-data-stream/description/

public class MedianFinder {
    private readonly PriorityQueue<int, int> lPq;
    private readonly PriorityQueue<int, int> rPq;
    public MedianFinder() {
        lPq = new PriorityQueue<int, int>();
        rPq = new PriorityQueue<int, int>();
    }
    
    public void AddNum(int num) {
        if(lPq.Count == 0 && rPq.Count == 0){
            lPq.Enqueue(num, -num);
        }
        else if(rPq.Count == 0){
            if(num < lPq.Peek()){
                lPq.Enqueue(num, -num);
            }
            else{
                rPq.Enqueue(num, num);
            }
        }
        else if(num < rPq.Peek()){
            lPq.Enqueue(num, -num);
        }
        else{
            rPq.Enqueue(num, num);
        }

        if(rPq.Count - lPq.Count == 2){
            lPq.Enqueue(rPq.Peek(), -rPq.Dequeue());
        }
        if(lPq.Count - rPq.Count == 2){
            rPq.Enqueue(lPq.Peek(), lPq.Dequeue());
        }
    }
    
    public double FindMedian() {
        var cnt = lPq.Count + rPq.Count;
        if(cnt % 2 == 0){
            return (lPq.Peek() + rPq.Peek())/2.0d;
        }

        return lPq.Count > rPq.Count ? lPq.Peek() : rPq.Peek();
    }
}

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder obj = new MedianFinder();
 * obj.AddNum(num);
 * double param_2 = obj.FindMedian();
 */