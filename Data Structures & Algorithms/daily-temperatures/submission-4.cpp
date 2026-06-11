class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        stack<int> st;
        int n = arr.size();
        vector<int> res(n, 0);
        for(int i=0; i<n; i++){
            if(st.empty()) st.push(i);
            else{
                while(!st.empty() && arr[i] > arr[st.top()]){
                    res[st.top()] = i - st.top();
                    st.pop();
                }
                st.push(i);
            }
        }
        return res;
    }
};
