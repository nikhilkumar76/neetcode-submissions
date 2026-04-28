class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int num : nums) mp[num]++;
        int maxele = INT_MIN;
        for(auto& it : mp) if(it.second > maxele) maxele = it.second;
        for(auto& it : mp) if(it.second == maxele) return it.first;
        return 0;
    }
};