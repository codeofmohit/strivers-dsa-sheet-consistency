class MyStack {
private:
    queue<int> q;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        if(q.empty()) return -1;
        int size= q.size();
        while(--size){
            int a= q.front();
            q.pop(); q.push(a);
        }
        int ans=q.front();
        q.pop();
        return ans;
    }
    
    int top() {
        if(!q.empty()) return q.back();
        return -1;
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */