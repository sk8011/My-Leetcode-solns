// Last updated: 17/8/2025, 11:32:28 pm
class MyStack {
public:
    queue<int> qq;
    int cSize=0;
    MyStack() {
        
    }
    
    void push(int x) {
        qq.push(x);
        cSize++;
        int temp=cSize-1;
        while(temp){
            int dat=qq.front();
            qq.pop();
            qq.push(dat);
            temp--;
        }
    }
    
    int pop() {
        int dat=qq.front();
        qq.pop();
        cSize--;
        return dat;
    }
    
    int top() {
        return qq.front();
    }
    
    bool empty() {
        if(cSize==0){
            return true;
        }
        return false;
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