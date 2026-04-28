// Boyer–Moore Voting Algorithm
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cand1 = 0, cand2 = 0;
        int cnt1 = 0, cnt2 = 0;
        int a = nums.size() / 3;

        for(int num : nums){
            if(cand1 == num) cnt1++;
            else if(cand2 == num) cnt2++;
            else if(cnt1==0) cand1 = num, cnt1 = 1;
            else if(cnt2==0) cand2 = num, cnt2 = 1;
            else cnt1--, cnt2--;
        }

        cnt1 = cnt2 = 0;
        for(int num : nums){
            if(num == cand1) cnt1++;
            else if(num == cand2) cnt2++;
        }

        vector<int> res;
        if(cnt1 > a) res.push_back(cand1);
        if(cnt2 > a) res.push_back(cand2);
        return res;
    }
};