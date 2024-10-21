/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {

struct ListNode *count=head;
int n=0;
while(count!=NULL)
{ n++;
count=count->next;
 }
 struct ListNode *prev=NULL,*cur=head,*foll=NULL;
 int mid=(n/2)+1;
 int i=1;
 int p=0;
 while(i<mid)
 { foll=cur->next;
 cur->next=prev;
 prev=cur;
 cur=foll;
 i++;}

 if(n%2!=0)
 {cur=cur->next;}
 
 while(cur!=NULL)
 {if(cur->val!=prev->val)
 {return false;
 }
 cur=cur->next;
 prev=prev->next;}
 return true;
 
}
 
   