class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int longest = 0;

        for (int num : st) {
            // start only if (num - 1) doesn't exist
            if (!st.count(num - 1)) {
                int current = num;
                int length = 1;

                // grow the sequence
                while (st.count(current + 1)) {
                    current++;
                    length++;
                }
                longest = max(longest, length);
            }
        }
        return longest;
    }
};
