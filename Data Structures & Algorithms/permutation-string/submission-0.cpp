class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;
        int k = s1.size();
        vector<int> count1(26,0), count2(26,0);

        for(char c : s1) count1[c - 'a']++;

        for(int i=0; i<s2.size(); i++){
            count2[s2[i] - 'a']++;
            if(i >= k){
                count2[s2[i-k] - 'a']--;
            }
            if(count1 == count2) return true;
        }
        return false;
    }
};
