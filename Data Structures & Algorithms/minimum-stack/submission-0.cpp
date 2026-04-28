class MinStack {
public:
    stack<int> st;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        int mini = INT_MAX;
        vector<int> res;
        while(!st.empty()){
            mini = min(mini, st.top());
            res.push_back(st.top());
            st.pop();
        }
        for(int i=res.size()-1; i>=0; i--){
            st.push(res[i]);
        }
        return mini;
    }
};
