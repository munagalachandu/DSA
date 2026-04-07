class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0;
        int res=0;
        int n=s.size();
        unordered_set<char>st;
        while(r<n)
        { 
        int cnt=0;
        if(!st.count(s[r]))
        { st.insert(s[r]);
        res=max(res,r-l+1);
        r++;}
        else
        {st.erase(s[l]);
        l++;
        }}
        return res;
        
    
        
        }
};