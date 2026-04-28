class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> res;
        int j=0;
        int cnt=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=val) {
                nums[j++] = nums[i];
                cnt+=1;
            }
        }
        int num = nums.size() - cnt;
        for(int i=0; i<num; i++){
            nums.pop_back();
        }
        return nums.size();
    }
};