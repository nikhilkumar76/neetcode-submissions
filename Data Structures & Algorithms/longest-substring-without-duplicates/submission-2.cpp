class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int, int> mp;
        int low = 0 , high = 0;
        int maxLen = 0;
        while(high < s.size()){
            mp[s[high]]++;
            while(mp.size() < high - low + 1){
                mp[s[low]] --;
                if(mp[s[low]] == 0){
                    mp.erase(s[low]);
                }
                low++;
            }
            int len = high - low + 1;
            maxLen = max(maxLen , len);
            high++;
        }
        return maxLen;
    }
};
