class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int num : nums) mp[num]++;
        vector<vector<int>> arr(nums.size()+1);
        for(auto& p : mp) arr[p.second].push_back(p.first);
        vector<int> res;
        
        for(int i=arr.size()-1; i>=0; i--){
            for(int n : arr[i]){
                res.push_back(n);
                if(res.size() == k) return res;
            }
        }
        return res;
    }
};
