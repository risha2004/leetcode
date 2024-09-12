class MinStack {
    stack<int> primary; 
    stack<int> minStack; 
public:
    MinStack() {
        
    
     
    }
    
    void push(int val) {
        primary.push(val);  
        
        if (minStack.empty() || val <= minStack.top()) {
            minStack.push(val);
        }
    }
    
    void pop() {
        if (primary.empty()) return;  
        int topValue = primary.top(); 
        primary.pop();               
        if (!minStack.empty() && topValue == minStack.top()) {
            minStack.pop();
        }
    }
    
    int top() {
        return primary.top(); 
    }
    
    int getMin() {
        return minStack.top();
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