#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a:";
    cin>>a;
    if(a%5==0)
    {
        cout<<"\n num divisbel by 5 :"<<a;
    }
    else
    {
        cout<<"\n num not divisbel by 5 :"<<a;
    }
    return 0;
}