class Solution {
public:
    set<string>s;
    void function(int i,string op,string &nums)
    {
        if(i==nums.length())
        {
            return;
        }
        for(int j=i;j<nums.size();j++)
        {
            op=op+nums[j];
            s.insert(op);
            swap(nums[i],nums[j]);
            function(i+1,op,nums);
            op.pop_back();
            swap(nums[i],nums[j]);
        }
        
    }
    
    int numTilePossibilities(string tiles) {
        string m="";
        
        function(0,m,tiles);
        
        return s.size();
    }
};