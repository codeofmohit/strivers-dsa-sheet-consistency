class MyQueue {
private:
    stack<int> s1,s2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        if(empty()) return -1;
        if(s2.empty()){
            while(!s1.empty()){
            int q=s1.top();
            s1.pop(); s2.push(q);
            }
        }
        int ans=s2.top();
        s2.pop();
        return ans;
    }
    
    int peek() {
        if(empty()) return -1;
        if(s2.empty()){
            while(!s1.empty()){
            int q=s1.top();
            s1.pop(); s2.push(q);
            }
        }
        return s2.top();
    }
    
    bool empty() {
        return s1.empty()&&s2.empty();
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