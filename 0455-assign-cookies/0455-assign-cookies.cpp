class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int ng=g.size();
        int ns=s.size();
        
        int ans=0;
        int i=0,j=0;
        while( i<ng&&j<ns)
        { if( s[j]>=g[i])
        {ans++; i++;j++;}
        else if(s[j]<g[i])
        { j++;}
        }
        return ans;
    }
};