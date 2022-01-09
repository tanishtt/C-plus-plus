#include<iostream>
using namespace std;
int a(int);
int b(int);
int a(int n)
{
    if(n<0)
    return 0;
if(n==0)//||n==1)
return 1;
if(n==1)
return 0;
return a(n-2)+2*b(n-1);
}
int b(int n)
{
    if(n<0)
    return 0;
if(n==0||n==1)
return n;
return a(n-1)+b(n-2);

}
int main()
{
cout<<a(12);
    return 0;
}




