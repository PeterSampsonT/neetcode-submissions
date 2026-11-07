class MinStack {
private:
    std::stack<int> s;
    std::stack<int> min;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);

        if(min.empty())
        min.push(val);
        else if(val<min.top())
        min.push(val);
        else
        min.push(min.top());
    }
    
    void pop() {
        s.pop();
        min.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return min.top();
    }
};
