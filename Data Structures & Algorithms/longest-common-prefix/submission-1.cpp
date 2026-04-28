class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string a = strs[0], b = strs.back();
        int i=0; 
        while(i<a.size() && i<b.size() && a[i]==b[i]){
            i++;
        }
        return strs[0].substr(0,i);
    }
};