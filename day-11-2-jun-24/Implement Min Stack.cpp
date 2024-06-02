class MinStack {
private:
    stack<int> s;
    stack<int> m;

public:
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        if(!m.empty()){
            if(m.top()<=val) m.push(m.top());
            else m.push(val);
        }
        else m.push(val);
    }
    
    void pop() {
        s.pop(); m.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return m.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */