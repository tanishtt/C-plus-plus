class Solution {
public:
    
    bool issafe(vector<vector<bool>>&grid,int row,int col,int n)
    {
        for(int i=row-1;i>=0;i--)
            if(grid[i][col]==true)
                return false;
        for(int i=row-1,j=col-1;i>=0&&j>=0;i--,j--)
        {
            if(grid[i][j]==true)
                return false;
            
        }
        for(int i=row-1,j=col+1;i>=0&&j<n;i--,j++)
        {
            if(grid[i][j]==true)
                return false;
            
        }
        return true;
    }
    int count=0;
    void nqueen(vector<vector<bool>>&grid,int curr_row,int n)
    {
        if(curr_row==n)
        {
            count++;
            return;
        }
        for(int i=0;i<n;i++)
        {
            if(issafe(grid,curr_row,i,n))
            {
                
                
                grid[curr_row][i]=true;
                nqueen(grid,curr_row+1,n);
                grid[curr_row][i]=false;
                
            }
        }
    }
    
    int totalNQueens(int n) {
        //string ....
        
        vector<vector<bool>>grid( n , vector<bool> (n, false));//(n,vector<int>(n,0));
        
        
        nqueen(grid,0,n);
        //vector<string>v;
        return count;
    }
};