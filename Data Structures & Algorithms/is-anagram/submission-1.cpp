class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int i=0,j=0;
        if(t.size()!=s.size()) return false;
        while(i<t.size()){
            if(t[i++] != s[j++]) return false;
        }
        return true;
    }
};
