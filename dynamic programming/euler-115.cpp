#include<iostream>
#include<vector>
using namespace std;
int f(int n,int m,vector<int>&dp)
{
    int sol=1;
    
    if(n<m)
    return sol;
    if(dp[n]!=-1)
    return dp[n];
    for(int startpos=0;startpos<=n-m;startpos++)
    {
        for(int blocklen=m;blocklen<=n-startpos;blocklen++)
        {
            sol=(sol+f(n-startpos-blocklen-1,m,dp)%1000000007)%1000000007;
        }
    }
    return dp[n]=sol;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int m;
    int x;
    int t;
    cin>>t;
    int ans=0;
    int res=0;
    while(t--)
    {
        cin>>m;
        //cin>>x;
        vector<int>dp(1000002,-1);
        //n=m+1;
        int l=1;
        int r=2000;//00;//m+1;
        int mid;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            //cout<<mid<<"-------";
            ans=f(mid,m,dp);
            if(ans<1000000)
            {
                l=mid+1;
                res=mid;
            }
            else
            {
                r=mid-1;
                res=mid;
            }
            
        }
        //cout<<"lllll";
        cout<<res<<endl;
        
    }   
    return 0;
}