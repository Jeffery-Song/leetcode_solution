/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode result = new ListNode(0);
        ListNode currentDigit = result;
        ListNode lastDigit = result;
        int lenL1 = length(l1);
        int lenL2 = length(l2);
        
        // assume l1 <= l2;
        if(lenL1 > lenL2){
            ListNode tmpl = l1;
            l1 = l2;
            l2 = tmpl;
        }
        
        // add the lenL1 digits.
        ListNode currentL1 = l1;
        ListNode currentL2 = l2;
        while(currentL1 != null){
            currentDigit.next = new ListNode(0);
            currentDigit.val += currentL1.val + currentL2.val;
            if(currentDigit.val > 9){
                currentDigit.val -= 10;
                currentDigit.next.val = 1;
            }
            lastDigit = currentDigit;
            currentDigit = currentDigit.next;
            currentL1 = currentL1.next;
            currentL2 = currentL2.next;
        }
        
        // add the l2 to the rest.
        while(currentL2 != null){
            currentDigit.next = new ListNode(0);
            currentDigit.val += currentL2.val;
            if(currentDigit.val > 9){
                currentDigit.val -= 10;
                currentDigit.next.val = 1;
            }
            lastDigit = currentDigit;
            currentDigit = currentDigit.next;
            currentL2 = currentL2.next;
        }
        
        // delete the last 0.
        if(currentDigit.val == 0 && currentDigit != result)
            lastDigit.next = null;
        
        return result;
    }
    
    // returns the length of a list. >=1
    private int length(ListNode l){
        ListNode t = l.next;
        int len = 1;
        while(t != null){
            t = t.next;
            len++;
        }
        return len;
    }
}
