class Solution {
public:
    int helper(vector<int>&coins,vector<int>&dp,int amount)
    {
        if(amount==0)
            return 0;
        if(amount<0)
            return INT_MAX;
        if(dp[amount]!=-1)
            return dp[amount];
        int mini=INT_MAX;
        for(int i=0;i<coins.size();i++)
        {
            mini=min(mini,helper(coins,dp,amount-coins[i]));
        }
        if(mini==INT_MAX)
            return dp[amount]=mini;
        return dp[amount]=mini+1;
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<int>dp(amount+1,-1);
        int c=helper(coins,dp,amount);
        if(c==INT_MAX)
            return -1;
        return c;
    }
};