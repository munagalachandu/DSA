class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>ch;
        for(char c:s)
        ch[c]++;
        int j=0;
        while(s[j]!='\0')
        {if(ch[s[j]]==1)
        return j;
        j++;
        }
        return -1;
    }
};