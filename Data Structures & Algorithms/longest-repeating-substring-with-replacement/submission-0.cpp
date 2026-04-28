class Solution {
public:
    int characterReplacement(string s, int k) {
        int low = 0, high = 0, res = 0;
        unordered_map<char,int> mp;
        int maxFreq = 0, window_size = 0;
        while(high < s.size()){
            mp[s[high]]++;
            maxFreq = max(maxFreq, mp[s[high]]);
            while((high - low + 1) - maxFreq > k){
                mp[s[low]]--;
                if(mp[s[low]] == 0) mp.erase(s[low]);
                low++;
            }
            res = max(res, high - low + 1);
            high++;
        }
        return res;
    }
};
