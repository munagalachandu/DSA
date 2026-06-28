class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int f=0, t=0;
        bool a=true;
        for( int i=0;i<bills.size();i++)
        {
            if( bills[i]==5)
            { f++;}
            else if( bills[i]==10)
            { if(f!=0)
               {
                f--;
               }
               else
               a= false;
               t++; }
               else if( bills[i]==20)
               {
                    if(t>0 && f>0)
                    {t--;
                    f--;
                    }
                    else if( t==0 && f>=3)
                    { f-=3;}
                    else
                    a=false;

               }

        }
        return a;
    }
};