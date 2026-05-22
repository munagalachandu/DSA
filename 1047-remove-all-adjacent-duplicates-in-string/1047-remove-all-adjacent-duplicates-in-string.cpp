class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        //stack of character named st;
        for( int i=0;i<s.length();i++)
        { if( !st.empty() && st.top()==s[i])
            st.pop();
            
        else
         st.push(s[i]);}
        string res;
        while(!st.empty())//while the stack is not empty
        { res+=st.top(); // add the character to the result
        st.pop();// after adding pop it from the stack
        }
        reverse(res.begin(), res.end()); //reverse string before returning
        return res;


    }
};