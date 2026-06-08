class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        stack<int> st;
        for(int i=0; i<prices.size(); i++){
            if(st.empty()) st.push(prices[i]);
            if(prices[i] < st.top()){
                st.pop();
                st.push(prices[i]);
            }else{
                res = max(res, prices[i] - st.top());
            }
        }
        return res;
    }
};
