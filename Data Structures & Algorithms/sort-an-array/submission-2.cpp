class Solution {
public:
    void quicksort(vector<int>& nums, int left , int right){
        if(left >= right) return;
        int pivot = nums[right];
        int i = left;
        for(int j=left; j<right; j++){
            if(nums[j] < pivot) swap(nums[i++], nums[j]);
        }
        swap(nums[i], nums[right]);

        quicksort(nums,left,i-1);
        quicksort(nums,i+1,right);
    }
    vector<int> sortArray(vector<int>& nums) {
        quicksort(nums, 0 , nums.size()-1);
        return nums;
    }
};