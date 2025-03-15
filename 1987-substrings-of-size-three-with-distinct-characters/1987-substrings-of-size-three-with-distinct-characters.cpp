class Solution {
public:
    int countGoodSubstrings(string s) {
       if(s.size()<3)
       return 0;
       unordered_set<char> mp;
      int ct = 0;
    for (int i = 0; i <= s.size() - 3; i++) {
       mp.clear();
        mp={s[i],s[i+1],s[i+2]};

        if (mp.size() == 3) ct++;
    }
    return ct;
    
    }
};