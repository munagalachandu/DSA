class Solution {
public:
    int calPoints(vector<string>& operations) {
       // IF THE INPUT IS
       // INTEGER--> CREATE A RECORD--> PUSH(X)
       // IF IT IS + 
       // PUSH SUM OF LAST 2 SCORES
       // IF IT IS D
       //PUSH DOUBLE OF LAST SCORE
       // C
       // POP()
       //RESULT IS SUM OF ALL ELEMENTS IN STACK
       stack<int> st;
       for( int i =0;i<operations.size();i++)
       { if(operations[i]=="C")
            st.pop();
            
        else if(operations[i]=="D")
         { int elem= st.top(); //push double of the previou elem/ top elem
         st.push(elem*2);}
         
         else if( operations[i]=="+")
         { int elem1= st.top();  // top element 1
            st.pop();              // pop element 1
            int elem2=st.top(); // previoue elemennt 2
            st.push(elem1);  // push back the element 1
            st.push(elem1+elem2);
            }
            else
            { st.push(stoi(operations[i]));
            }

         }
         int sum=0;
         while(!st.empty())
         {sum+=st.top();
         st.pop();}
         return sum;

    }
};