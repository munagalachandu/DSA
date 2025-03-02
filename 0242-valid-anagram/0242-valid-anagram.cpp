class Solution {
public:
    bool isAnagram(string s, string t) {
       unordered_map<char,int>m1,m2;
       for(char c:s)
       m1[c]++;
       for(char ch:t)
       m2[ch]++;
       if(m1==m2)
       return true;
       else
       return false; 
    }
};