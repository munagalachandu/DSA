/*Find maximum in an Array
Given a list of N integers, representing height of mountains. Find the height of the tallest mountain.
Input:
First line will contain T, number of testcases. Then the testcases follow.
The first line in each testcase contains one integer, N.
The following line contains N space separated integers: the height of each mountains.
Output:For each testcase, output one line with one integer: the height of the tallest mountain for that test case.
Input
1
5
4 7 6 3 1
output
7
*/
#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{ int i, max=0,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);}
	for(i=0;i<n;i++)
	{ if(a[i]>max)
	max=a[i];}
	printf("\n%d",max);
	

}}
