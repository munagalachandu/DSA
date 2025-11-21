class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp=INT_MAX;
        int maxp=0;
        for (int p:prices)
        {minp=min(minp,p);
        maxp=max(maxp,p-minp);}
        return maxp;
    }
};
// 7,1,5,3,6,4
// minp=7, maxp=0, minp=1, maxp=0, minp=1, maxp=4, minp=1, maxp=