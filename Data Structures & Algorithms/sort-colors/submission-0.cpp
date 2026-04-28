class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int zero = 0, ones = 0, two = 0;
        vector<int> res;
        for(int i=0; i<n; i++){
            if(nums[i]==0) zero++;
            else if(nums[i] == 1) ones++;
            else two++;
        }
        for(int i=0; i<zero; i++) nums[i] = 0;
        for(int i=0; i<ones; i++) nums[zero+i] = 1;
        for(int i=0; i<two; i++) nums[zero+ones+i] = 2;
    }
};