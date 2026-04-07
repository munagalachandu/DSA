class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<int, int> mp;
        int n =s.size();
        int l=0, maxf=0, res=0;
        for( int r=0;r<n;r++)
        {mp[s[r]]++;
        maxf=max(maxf,mp[s[r]]);
        while((r-l+1)-maxf>k)
        {mp[s[l]]--;
        l++;}
        res=max(res,r-l+1);
         }
         return res;
    }
};