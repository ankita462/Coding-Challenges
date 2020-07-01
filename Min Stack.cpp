class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> s;
    int min;
    MinStack() {
        min=INT_MAX;
    }
    
    void push(int x) {
        if(x<=min) {
            s.push(min);
            min=x;
        }
        s.push(x);
    }
    
    void pop() {
        int t=s.top();
        s.pop();
        if(t==min) {
            min=s.top();
            s.pop();
        }
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
