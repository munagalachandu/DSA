int kthFactor(int n, int k) {
 int a[n+1];
 int i;
 int j=0;
 for(i=1;i<=n+1;i++)
 {if(n%i==0)
 {a[j]=i;
 j++;}}
 if(j<k)
 return -1;
 else 
 return a[k-1];}
