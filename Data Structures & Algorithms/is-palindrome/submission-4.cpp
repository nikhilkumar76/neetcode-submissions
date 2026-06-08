class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int j=n-1, i=0;
        while(i<j){
            while(i<j && !isalnum(s[i])) i++;
            while(i<j && !isalnum(s[j])) j--;   
            if(tolower(s[i]) == tolower(s[j])){
                i++;
                j--;
            }else{
                return false;
            }
        }
        return true;
    }
};
