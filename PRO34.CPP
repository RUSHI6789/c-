#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    cout<<"enter c:";
    cin>>c;
    if(a>b && a>c)
    {
        cout<<"\n a grater :"<<a;
    }
    else
    {
        if(b>c)
        {
            cout<<"\n b grater :"<<b;
        }
        else
        {
            cout<<"\n c grater :"<<c;
        }
    }
    return 0;
}
