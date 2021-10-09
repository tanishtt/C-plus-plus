class Solution {
public:vector<vector<int>>ans;
    set<vector<int>>s;
    void helper(vector<int>&nums,int i)
    {
        if(i==nums.size())
        {
           if(s.find(nums)==s.end())
            {
                s.insert(nums); 
            ans.push_back(nums);}
            return;
        }
        for(int j=i;j<nums.size();j++)
        {
            
                swap(nums[i],nums[j]);
                helper(nums,i+1);
                swap(nums[i],nums[j]);
            
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        helper(nums,0);
        return ans;
    }
};