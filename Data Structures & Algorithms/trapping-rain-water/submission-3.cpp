class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int ans = 0;
        vector<int> lmax(height.begin(), height.end());
        vector<int> rmax(height.rbegin(), height.rend());
        for(int i=1; i<n; i++){
            if(lmax[i] < lmax[i-1]) lmax[i] = lmax[i-1];
            if(rmax[i] < rmax[i-1]) rmax[i] = rmax[i-1];
        }
        reverse(rmax.begin(), rmax.end());
        for(int i=0; i<n; i++){
            ans += min(lmax[i], rmax[i]) - height[i];
        }
        return ans;
    }
};
