// https://leetcode.com/problems/happy-number/description/

public class Solution {
    public bool IsHappy(int n) {
        var slow = n;
        var fast = n;

        do{
            slow = Process(slow);
            fast = Process(Process(fast));
        }while(slow != fast);

        return slow == 1;
    }

    private int Process(int n){
        var newNum = 0;

        while(n != 0){
            var d = n % 10;
            newNum += (d * d);
            n = n / 10;
        }

        return newNum;
    }
}