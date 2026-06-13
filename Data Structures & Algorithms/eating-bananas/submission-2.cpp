class Solution {
public:
    int func(int mid, vector<int>& arr){
        int sum = 0;
        for(int i=0; i<arr.size(); i++){
            sum += arr[i]/mid;
            if(arr[i] % mid != 0) sum += 1;
        }
        return sum;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(), piles.end());
        int res = 0;
        while(low <= high){
            int mid = low + (high - low) / 2;
            int hrs = func(mid, piles);
            if(hrs > h) low = mid + 1;
            else{
                res = mid;
                high = mid - 1;
            }
        }
        return res;
    }
};
