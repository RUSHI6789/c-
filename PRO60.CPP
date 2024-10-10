#include<iostream>
using namespace std;
int main()
{
    int i,n,t=1,r,s=0;
    for(i=1;i<=n;i++)
    {
        r=s+t;
        cout<<"\n "<<r;
        s=t;
        t=r;
    }
    return 0;
}
