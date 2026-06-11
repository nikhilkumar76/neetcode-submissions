class Solution {
public:
    bool valid(vector<int>&mp, vector<int>&freq){
        for(int i=0; i<256; i++){
            if(mp[i] > freq[i]) return false;
        }
        return true;
    }
    string minWindow(string s, string t) {
        if(s.size() < t.size()) return "";
        int left = 0, res = INT_MAX, start = 0;
        vector<int> mp(256,0), freq(256,0);
        for(char c: t) mp[c]++;
        for(int right = 0; right < s.size(); right++){
            freq[s[right]]++;
            while(valid(mp, freq)){
                int len = right - left + 1;
                if(res > len){
                    res = len;
                    start = left;
                }
                freq[s[left]]--;
                left++;
            }
        }
        if(res == INT_MAX) return "";
        return s.substr(start, res);
    }
};
