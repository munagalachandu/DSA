class Solution {
public:
     vector<string>ans;
     void bt( string s, int i, string temp)
     { if( i==s.size())
     { ans.push_back(temp);
     return;}
     if( isalpha(s[i]))
     { temp[i]=toupper(temp[i]);
     bt( s,i+1,temp);
     temp[i]=tolower(temp[i]);
     bt(s,i+1,temp);}
     else
     bt(s,i+1,temp);
     }


    vector<string> letterCasePermutation(string s) {
       string temp=s;
       bt(s,0,temp);
       return ans; 
    }
};