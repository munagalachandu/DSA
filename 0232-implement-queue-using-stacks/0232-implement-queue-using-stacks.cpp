class MyQueue {
    private :
    stack<int> s1,s2;
public:
    MyQueue() {
        
        stack<int> s1,s2;
    }
    
    void push(int x) {
        
        while(!s1.empty())
        {
        int n=s1.top();
        s2.push(n);
        s1.pop();
        }
        s1.push(x);
        while(!s2.empty())
 {
    int t=s2.top();
    s1.push(t);
    s2.pop();
 }   }
    
    int pop() {
        int r=s1.top();

       s1.pop();
       return r;
    }
    int peek() {
        return s1.top();
        
    }
    
    bool empty() {
        return s1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */