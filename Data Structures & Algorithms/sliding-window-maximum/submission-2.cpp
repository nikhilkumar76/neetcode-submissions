class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        deque<int> dq;
        for(int i=0; i<nums.size(); i++){
            //checking the size of window is valid or not
            if(!dq.empty() && dq.front() <= i-k) dq.pop_front();

            //Maintaining a monotonic deque
            while(!dq.empty() && nums[dq.back()] < nums[i]) dq.pop_back();

            dq.push_back(i);

            //if it's greater than the size start including the maxm window
            if(i >= k-1) res.push_back(nums[dq.front()]);
        }
        return res;
    }
};
