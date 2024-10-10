#include<iostream>
using namespace std;
int main()
{
    float i,n,t=0.5;
    cout<<"enter num :";
    cin>>n;
    for(i=0.5;i<=n;i++)
    {
        cout<<"\n "<<t;
        t+=i;
    }
    return 0;
}
