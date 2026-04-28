class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        int n = nums.size();
        stack<pair<int,int>> st;
        vector<int> res(n);
        for(int i=n-1; i>=0; i--){
            if(st.empty()){
                st.push({nums[i], i});
                continue;
            }
            while(!st.empty() && nums[i] >= st.top().first) st.pop();
            if(st.empty()) res[i] = 0;
            else res[i] = st.top().second - i;
            st.push({nums[i], i});
        }
        return res;
    }
};
