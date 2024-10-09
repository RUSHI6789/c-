#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"\n enter char :";
    cin>>ch;
    if(ch>='a' && ch<='z')
    {
        cout<<"\n capital :"<<ch-32;
    }
    else if(ch>='A' && ch<='Z')
    {
        cout<<"\n small :"<<ch+32;
    }
    else
    {
        cout<<"\n no char :";
    }
    return 0;
}
