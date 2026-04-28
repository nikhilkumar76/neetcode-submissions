class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low = 0, high = 0, sum = 0;
        int res = INT_MAX;
        while(high < nums.size()){
            sum += nums[high];
            while(sum >= target){
                res = min(res, high - low + 1);
                sum -= nums[low];
                low++;
            }
            high++;
        }
        return res==INT_MAX ? 0 : res;
    }
};