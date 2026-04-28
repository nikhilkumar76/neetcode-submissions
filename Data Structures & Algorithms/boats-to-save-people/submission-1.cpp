class Solution {
public:
    int numRescueBoats(vector<int>& nums, int limit) {
        int boats = 0;
        int i = 0 , j = nums.size() - 1;
        sort(nums.begin(), nums.end());
        while(i <= j){
            if(nums[i] + nums[j] <= limit) i++;
            j--;
            boats++;
        }
        return boats;
    }
};