/**
 * 19. Remove Nth Node From End of List
 * 
 * Given a linked list, remove the nth node from the end of list and return its head.
 * 
 * For example,
 * Given linked list: 1->2->3->4->5, and n = 2.
 * After removing the second node from the end, the linked list becomes 1->2->3->5.
 * 
 * Note:
 * Given n will always be valid.
 * Try to do this in one pass.
 *
 * Problem URL: https://leetcode.com/problems/remove-nth-node-from-end-of-list/
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    /**
     * Easy solution for this problem is to use fast and slow pointers. 
     * Fast pointer is n steps ahead of the slow pointer. 
     * When the fast pointer reaches the end, the slow pointer points at the previous element 
     * of the target element.
     */
    ListNode* removeNthFromEnd(ListNode* head, int n)  {
        // This covers the case when the list is empty
        if (head==NULL) {
            return NULL;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        // Advance fast pointer by n elements in the list 
        for(int i=0; i<n; i++){
            fast = fast->next;
        }

        // As long as fast is not NULL it means we haven't reached the end of the list 
        if(fast == NULL){
            head = head->next;
            return head;
        }

        while(fast->next != NULL){
            fast = fast->next;
            slow = slow->next;
        }

        slow->next = slow->next->next;

        return head;
    }
};