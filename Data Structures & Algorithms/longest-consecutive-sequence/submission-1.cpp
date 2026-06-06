class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int longest = 0;
        for(int i=0; i<nums.size(); i++){
            if(!s.count(nums[i] - 1)){
                int curr = 1;
                int num = nums[i];
                while(s.count(num+1)){
                    curr++;
                    num++;
                }
                longest = max(longest, curr);
            }
        }
        return longest;
    }
};
