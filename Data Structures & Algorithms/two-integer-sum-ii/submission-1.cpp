class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<pair<int,int>> arr;
        for(int i=0; i<numbers.size(); i++) arr.push_back({numbers[i], i});
        sort(arr.begin(), arr.end());
        int i=0, j=arr.size()-1;
        while(i<j){
            int sum = arr[i].first + arr[j].first;
            if(sum == target) return {arr[i].second + 1, arr[j].second + 1};
            else if(sum < target) i++;
            else j--;
        }
        return {-1,-1};
    }
};
