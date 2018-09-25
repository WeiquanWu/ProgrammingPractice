/**
Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.

Example:

Input: 1->2->4, 1->3->4
Output: 1->1->2->3->4->4

 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1) return l2;
        if(!l2) return l1;
        
        ListNode head(-1);
        ListNode* tmp = &head;
        
        while(l1 != NULL || l2 != NULL)
        {
          if(l2 == NULL) { tmp->next = l1; return head.next;} //l2 is shorter than l1, just merge whatever remains of l1 into the ans
            if(l1 == NULL){tmp->next = l2; return head.next;}
            
            //process of adding l1 or l2 into the result is as follows...
            //is l1 or l2 lowest? add that to tmp
            //remove l1/l2 node that you just added from l1/l2
            
            if(l1->val < l2 ->val)
            {
                tmp->next = l1;
                l1 = l1->next;
                tmp = tmp->next;
                tmp->next = NULL;
            }
            else
            {
                tmp->next = l2;
                l2 = l2->next;
                tmp = tmp->next;
                tmp->next = NULL;
            }
        }
        return head.next;
    }
};