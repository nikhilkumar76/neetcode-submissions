class Solution {
public:
    string longestPalindrome(string s) {

        int resLen = 0;
        int resIdx = 0;

        for(int i=0;i<s.size();i++){

            // ODD LENGTH

            int l=i;
            int r=i;

            while(l>=0 && r<s.size() && s[l]==s[r]){

                if(r-l+1 > resLen){
                    resLen = r-l+1;
                    resIdx = l;
                }

                l--;
                r++;
            }

            // EVEN LENGTH

            l=i;
            r=i+1;

            while(l>=0 && r<s.size() && s[l]==s[r]){

                if(r-l+1 > resLen){
                    resLen = r-l+1;
                    resIdx = l;
                }

                l--;
                r++;
            }
        }

        return s.substr(resIdx,resLen);
    }
};