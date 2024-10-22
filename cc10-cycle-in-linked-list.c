/*Cycle in a linked list
You are given a linked list A of size N.

Return the node where the cycle begins in the linked list. If there is no cycle, return NULL.

Input:
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains three lines of input.
First line contains an integer N, length of the linked list A.
Second line contains the value of the linked list nodes starting from the head for the linked list.
Third line contains an integer denoting the index of the node where the cycle starts.
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

int midelem(struct node*head,int x)
{ struct node* cur=head;
  
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
     int e;
     scanf("%d",&e);
	res= midelem(head,e);
	printf("%d\n",res);}
}



