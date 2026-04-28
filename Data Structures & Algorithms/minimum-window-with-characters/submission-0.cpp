class Solution {
public:
    bool valid(vector<int>& freq, vector<int>& mp){
        for(int i=0; i<256; i++){
            if(freq[i] > mp[i]) return false;
        }
        return true;
    }
    string minWindow(string s, string t) {
        if(s.size() < t.size()) return "";
        int left = 0, start = 0, res = INT_MAX;
        vector<int> freq(256,0), mp(256,0);
        for(char c : t) freq[c]++;
        for(int right = 0; right < s.size(); right++){
            mp[s[right]]++;
            while(valid(freq,mp)){
                int len = right - left + 1;
                if(res > len){
                    res = len;
                    start = left;
                }
                mp[s[left]]--;
                left++;
            }
        } 
        if(res == INT_MAX) return "";
        return s.substr(start, res);
    }
};
