/*Running Comparison
Alice and Bob recently got into running, and decided to compare how much they ran on different days.They each ran for N days — on the ith day, Alice ran A[i] meters and Bob ran B[i] meters.
On each day,
Alice is unhappy if Bob ran strictly more than twice her distance, and happy otherwise.
Similarly, Bob is unhappy if Alice ran strictly more than twice his distance, and happy otherwise.
For example, on a given day

If Alice ran 200 meters and Bob ran 500, Alice would be unhappy but Bob would be happy.
If Alice ran 500 meters and Bob ran 240
240, Alice would be happy and Bob would be unhappy.
If Alice ran 300 meters and Bob ran 500, both Alice and Bob would be happy.
On how many of the N days were both Alice and Bob happy?

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of three lines of input.
The first line of each test case contains a single integer N — the number of days.
The second line of each test case contains N space-separated integers 
 — the distances run by Alice on the N days.
The third line of each test case contains N space-separated integers 
— the distances run by Bob on the N days.
Output Format
For each test case, output on a new line the number of days when both Alice and Bob were happy.
*/
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n,i,c=0;
        scanf("%d", &n);
        int a[n], b[n];
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &b[i]);
        }
    
    for(i=0;i<n;i++)
    { if(2*a[i]>=b[i]&&b[i]>=a[i] )
    c++;
    else if(2*b[i]>=a[i]&&a[i]>=b[i])
    c++;}
    printf("\n%d",c);
    
    }
     

    return 0;
}
