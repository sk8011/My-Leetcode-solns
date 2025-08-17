// Last updated: 17/8/2025, 11:32:45 pm
class MinStack {
public:
    stack<int> st1,st2;
    MinStack() {
        
    }
    
    void push(int val) {
        st1.push(val);
    }
    
    void pop() {
        st1.pop();
    }
    
    int top() {
        return st1.top();
    }
    
    int getMin() {
        int minny=st1.top();
        while(!st1.empty()){
            st2.push(st1.top());
            minny=min(minny,st1.top());
            st1.pop();
        }
        while(!st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }
        return minny;
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