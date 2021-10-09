class Solution {
public:
    vector<vector<int>>ans;
    void function(int i,vector<int>&op,vector<int>&nums,int k)
    {
        if(nums.size()==i)
        {if(k==op.size())
        {
            ans.push_back(op);
            return;
        }
            return;}
        
        function(i+1,op,nums,k);
        op.push_back(nums[i]);
        function(i+1,op,nums,k);
        op.pop_back();
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<int>nums,op;
        for(int i=1;i<=n;i++)
        {
            nums.push_back(i);
        }
        function(0,op,nums,k);
        
        return ans;
    }
};