#include<iostream>
using namespace std;
int main()
{
int arr[]={-5,1,-2,3,-1,2,-2};
int n=7;
int msf=arr[0];
int res=arr[0];
int p=0;
int q=0;

for(int i=1;i<n;i++)
{
    //cout<<arr[i]<<"==";
if(msf+arr[i]<arr[i])
{
    p=i;
    q=i;
    msf=arr[i];
}
else
{
msf=msf+arr[i];
}
if(res<=msf)
{
    res=msf;
    q=i;
}

}
/*for (size_t i = 0; i < n; i++)
{cout<<arr[i]<<"--";

    /* code *
}*/

for(int i=p;i<=q;i++)
{
    cout<<arr[i]<<".>"<<i<<"----";
}
    return 0;
}


