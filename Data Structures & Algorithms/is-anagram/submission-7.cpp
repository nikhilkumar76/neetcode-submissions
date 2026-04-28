class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end()); //tc = o(nlogn) sc = o(logn) // c++ takes o(logn) space to solve
        sort(t.begin(), t.end());
        return s==t;
    }
};
