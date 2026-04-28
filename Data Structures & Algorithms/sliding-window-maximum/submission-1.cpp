class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int low = 0, high = 0;
        vector<int> res;
        multiset<int> mp;
        while(high < nums.size()){
            mp.insert(nums[high]);
            while((high - low + 1) == k){
                res.push_back(*rbegin(mp));
                mp.erase(mp.find(nums[low]));
                low++;
            }
            high++;
        }
        return res;
    }
};
