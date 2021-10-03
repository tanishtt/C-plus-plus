class Solution {
public:
    vector<vector<int>>ans;
    void function(int i,vector<int>op,vector<int>&nums)
    {
        if(i==nums.size())
        {
            ans.push_back(op);
            return;
        }
        function(i+1,op,nums);
        op.push_back(nums[i]);
        function(i+1,op,nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        function(0,{},nums);
        return ans;
    }
};