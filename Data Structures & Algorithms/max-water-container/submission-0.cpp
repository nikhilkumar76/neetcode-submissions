class Solution {
public:
    int maxArea(vector<int>& nums) {
        int left = 0, right = nums.size()-1;
        int currArea = 0, maxArea = INT_MIN;
        while(left < right){
           int height = min(nums[left], nums[right]);
           int width = right - left ;
           currArea = height * width;
           maxArea = max(maxArea , currArea);
           if(nums[left] < nums[right]) left++;
           else right--;
        }
        return maxArea;
    }
};
