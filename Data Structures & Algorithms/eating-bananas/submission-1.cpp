class Solution {
public:
    int func(vector<int>& nums, int h){
        int sum = 0;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i] / h;
            if(nums[i] % h != 0) sum += 1;
        }
        return sum;
    }
    int minEatingSpeed(vector<int>& nums, int h) {
        int low = 1, high = *max_element(nums.begin(), nums.end()), res = -1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            int hrs = func(nums, mid);
            if(hrs > h){
                low = mid + 1;
            }else{
                res  = mid;
                high = mid - 1;
            }
        }
        return res;
    }
};
