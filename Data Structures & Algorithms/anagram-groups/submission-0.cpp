// Take each string, sort its characters, and use that sorted version as a key.
// All strings that become identical after sorting belong to the same group.
// Store groups in a hash map where the key is the sorted string and the value is the list of anagrams.
// Finally, return all the grouped lists.
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(auto &it : strs){
            string key = it;
            sort(key.begin(), key.end());
            mp[key].push_back(it);
        }
        vector<vector<string>> res;
        for(auto &it : mp){
            res.push_back(it.second);
        }
        return res;
    }
};
