class Solution {
public:
    int helper(vector<int>&nums,vector<int>&dp,int n)
    {
        if(n==0||n==1)
            return nums[n];
        if(dp[n]!=-1)
            return dp[n];
        int maxi=0;
        for(int i=2;i<=n;i++)
        {
            maxi=max(maxi,helper(nums,dp,n-i));
        }
        
        return dp[n]=nums[n]+maxi;
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        if(nums.size()==2)
            return max(nums[0],nums[1]);
        vector<int>dp(nums.size(),-1);
        
        return max(helper(nums,dp,nums.size()-1),helper(nums,dp,nums.size()-2));
    }
};