/*Given the head of a singly linked list, reverse the list, and return the reversed list.*/

/*Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    
struct ListNode *current=head, *prev=NULL, *next=NULL;
while(current!=NULL)
{ next=current->next;
current->next=prev;
prev=current;
current=next;
}
return prev;
}
