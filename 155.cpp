class MinStack {
private:
    //                   |cur||min|
    std::vector<std::pair<int, int>> st;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty() || getMin() > val) {
            st.push_back({val, val});
        } else {
            st.push_back({val, st.back().second});
        }
    }
    
    void pop() {
        st.pop_back();
    }
    
    int top() {
        if(!st.empty()) {
            return st.back().first;
        } else {
            return -1;
        }
        
    }
    
    int getMin() {
        if(!st.empty()) {
            return st.back().second;
        } else {
            return -1;
        }
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





 //======================[ USING 2 STACKS INSTEAD OF VECOTR ]=========================

 class MinStack {
private:
    std::stack<int> st;
    std::stack<int> minst;
public:
    MinStack() {
        
    }
    
    void push(int val) {
    st.push(val);
    if(minst.empty() || val <= minst.top()) {
        minst.push(val);
    } else {
        minst.push(minst.top());
    }
}
    void pop() {
        
        st.pop();
        minst.pop();
    }
    
    int top() {
        if(!st.empty()) {
            return st.top();
        } else return -1;
    }
    
    int getMin() {
        if(!minst.empty()) {
            return minst.top();
        } else return -1;
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