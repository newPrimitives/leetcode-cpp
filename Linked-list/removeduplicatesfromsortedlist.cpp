/**
 * 83. Remove Duplicates from Sorted List
 * 
 * Given a sorted linked list, delete all duplicates such that each element appear only once.
 * 
 * For example,
 * Given 1->1->2, return 1->2.
 * Given 1->1->2->3->3, return 1->2->3.
 *
 * Problem URL: https://leetcode.com/problems/remove-duplicates-from-sorted-list/
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
    ListNode *deleteDuplicates(ListNode *head) {
        // This covers the case when the list is empty
        if (head==NULL) {
        	return NULL;
        }

        // This covers the case when there is only one element in the list 
        if (head->next==NULL){
        	return head;
        }

        /**
         * We go through the list as long as the next element is not NULL (meaning it's the end).
         * We compare the current head and the next head value. If they are the same, we take replace the 
         * current next head with the head of the further next. If they are not the same, we just continue.
        */
        ListNode* list = head;
        while (head->next != NULL) {
            if (head->next->val == head->val) {
                head->next = head->next->next;

            } else {
                head = head->next;
            }
        }
        return list;
    }
};