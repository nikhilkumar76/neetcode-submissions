// Vertical Scanning
// Take the first string as the baseline.
// Scan each character index i of the first string.
// For each index i, compare that character with the character at index i in every other string.
// If any string:
// is shorter (i ≥ its length), or
// has a different character,
// → the prefix ends just before i, so return strs[0].substr(0, i).
// If no mismatch happens for all characters, return the entire first string.
// Core idea:
// Check characters column-by-column (vertically).
// Stop as soon as one mismatch is found.
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        for(int i=0; i<strs[0].size(); i++){
            char c = strs[0][i];
            for(int j=1; j<strs.size(); j++){
                if(i >= strs[j].size() || c!=strs[j][i]){
                    return strs[0].substr(0,i);
                }
            }
        }
        return strs[0];
    }
};