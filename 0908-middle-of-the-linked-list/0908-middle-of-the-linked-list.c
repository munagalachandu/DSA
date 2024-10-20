/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode dummy;
    dummy.next=head;


struct ListNode *tail=head;

struct ListNode *cur=&dummy;

int c=1;
while(tail->next!=NULL)
{c++;
tail=tail->next;}
int i=1;
while(cur->next!=NULL)

{if(i<(c/2)+1)
{struct ListNode *dup=cur->next;
cur->next=dup->next;
free(dup);
}
else 
{cur=cur->next;}
i++;}
return dummy.next;
}