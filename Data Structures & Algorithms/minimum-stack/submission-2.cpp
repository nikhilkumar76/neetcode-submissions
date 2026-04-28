class MinStack {
public:
    stack<long long> st;
    long min;
    MinStack() {}
    
    void push(int val) {
        if(st.empty()){
            st.push(0);
            min = val;
        }else{
            st.push(val - min);
            if(min > val) min = val;
        }
    }
    
    void pop() {
        if(st.empty()) return;
        long long top = st.top();
        st.pop();
        if(top < 0) min = min - top;
    }
    
    int top() { 
        return (st.top() > 0) ? st.top() + min: (int)min;
    }
    
    int getMin() {
        return (int)min;
    }
};
