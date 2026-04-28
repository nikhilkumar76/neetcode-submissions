class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int num: nums) mp[num]++;
        int a = nums.size() / 3;
        vector<int> res;
        for(auto it: mp){
            if(it.second > a) res.push_back(it.first);
        }
        return res;
    }
};