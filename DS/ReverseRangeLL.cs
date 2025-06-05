/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int val=0, ListNode next=null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */
public class Solution {
    public ListNode ReverseBetween(ListNode head, int left, int right) {
        if(left == right){
            return head;
        }

        var temp = new ListNode();
        temp.next = head;
        var prev = temp;

        for(var i = 1; i < left; i++){
            prev = prev.next;
        }

        var curr = prev.next;

        for(var i = 1; i <= right - left; i++){
            var tmp = prev.next;
            prev.next = curr.next;
            curr.next = curr.next.next;
            prev.next.next = tmp;
        }

        return temp.next;
    }
}