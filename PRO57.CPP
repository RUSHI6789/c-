#include<iostream>
using namespace std;
int main()
{
    int i,n,t=1;
    cout<<"enter num :";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"\n "<<t;
        t+=t;
    }
    return 0;
}
