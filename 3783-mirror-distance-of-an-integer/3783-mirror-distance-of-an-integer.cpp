class Solution {
public:
    int mirrorDistance(int n) {
         int revint=0,i=0;
         int n1=n;
         while( n!=0)
         { int r= n%10;
         revint=revint*10+r;
         n=n/10;
         i++;}
         return abs(n1-revint);
    }
};