/*Search an element in an array
You are given an array A of size N and an element X
Your task is to find whether the array A contains the element 
X or not.

Input Format
The first line contains two space-separated integers N
and X — the size of array and the element to be searched.
The second line contains all the elements of array A

Output Format
Output "YES" if the element X is present in A, otherwise output "NO".

 
Sample 1:
Input
Output
5 3
7 3 5 2 1
YES
Sample 2:
Input
Output
5 10
7 3 5 2 1
NO
*/



#include <stdio.h>

int main() {
	// your code goes here
	int n,x,i,c=0;
	scanf("%d",&n);
	scanf("%d",&x);
	int a[n];
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);}
	for(i=0;i<n;i++)
	{ if(a[i]==x)
	   c++;}
	  if(c>0)
	  printf("YES");
	  else
	  printf("NO");
	  return 0;

}

