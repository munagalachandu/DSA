/*Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.*/
/*Input: head = [1,2,6,3,4,5,6], val = 6
Output: [1,2,3,4,5]*/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val) {
    
    struct ListNode dummy;
    dummy.next = head; 
      struct ListNode *cur = &dummy;
    
    while(cur->next!=NULL)
    {if(cur->next->val==val)
    {struct ListNode *dup=cur->next;
    cur->next=dup->next;
    free(dup);
    }
    else
    {cur=cur->next;}}
    return dummy.next;
    
}