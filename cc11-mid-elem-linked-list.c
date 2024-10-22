/*Find Middle Element of Linked List
You are given the head of a singly linked list A of length N. The values in the list are A1,A2.....respectively. You need to find the value of the middle element of the linked list.

The middle element of a linked list of length N is the (n/2)+1 th element from the head of the list.

Input Format
The first line of the input contains a single integer T - the number of test cases. The description of T test cases follows.

The first line of each test case contains a single integer N.

The second line of each test case contains N space-separated integers 
Output Format
For each test case, the function you complete should return the value of the middle element of the list.
*/
#include <stdio.h>

struct node
{ int data;
struct node* next;};

struct node* createnode(int a)
{ struct node *nnew= (struct node*)malloc(sizeof(struct node));
nnew->data=a;
nnew->next=NULL;
return nnew;
}

int midelem(struct node*head,int n)
{ struct node* cur=head;
  int x=(n/2)+1;
  int i=1;
  while(i!=x)
  { cur=cur->next;
  i++;
  }
  return cur->data;
}
  



int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{ int n; int v;
	scanf("%d",&n);
	struct node *head=NULL;
	struct node* tail=NULL;
	for(int i=0;i<n;i++)
	{scanf("%d",&v);
	struct node *neww=createnode(v);
	if(head==NULL)
	head=tail=neww;
	else
	{ tail->next=neww;
	tail=neww;
	}}
	int res;

	res= midelem(head,n);
	printf("%d\n",res);}
}

