/**
 * 141. Linked List Cycle
 * 
 * Given a linked list, determine if it has a cycle in it.
 * 
 * Follow up:
 * Can you solve it without using extra space?
 *
 * Problem URL: https://leetcode.com/problems/linked-list-cycle/
 */

class Solution {
public:

	/**
	 * This problem can be solved by simply running two pointers through the list.
	 * If the list is empty (head is null), no loop is possible so we don't have to check anything else
	 * If the list has only one element (head.next is null), no loop is possible, hence there is no
	 * cycle. Otherwise, we start the first pointer on the first node head, and the second pointer on the 
	 * second node head.next. Then we continuously advance the first poind (slow) by one every time through 
	 * the loop, and advance pointer (fast) by two (or by one if you run out of elements). If there is a
	 * loop, they will eventually point to the same node and we can conclude there is a cylcle
	 */
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL) {
            return false;
        }

		ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
           
            if(slow == fast) {
                return true;
            }
        }

        return false;
    }
};