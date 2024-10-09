#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter num:";
    cin>>n;
    if(n>0)
    {
        cout<<"\n positive:";
    }
    else
    {
        if(n<0)
        {
            cout<<"\n nagetive :";
        }
        else
        {
            cout<<"\n zero :";
        }
    }
    return 0;
}
