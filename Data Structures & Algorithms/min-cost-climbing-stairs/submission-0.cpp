class Solution {
public:
    int dfs(int n, int i,vector<int>&cost, vector<int>& dp){
        if(i>=n) return 0;
        if(dp[i] != -1) return dp[i];
        return dp[i] = cost[i] + min(dfs(n,i+1,cost,dp) , dfs(n,i+2,cost,dp));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n+1, -1);
        return min(dfs(n,0,cost,dp), dfs(n,1,cost,dp));
    }
};
