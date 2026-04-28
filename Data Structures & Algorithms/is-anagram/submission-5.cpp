class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false; 
        unordered_map<char,int> mp; 
        for(char c: s) mp[c]++;
        for(char c: t) mp[c]--;
        for(auto it : mp){
            if(it.second != 0) return false;
        }
        return true;
    }
    //TC: O(n) average
// SC: O(k) where k = number of unique characters
// (ASCII → max 128, Unicode → much higher)
};
