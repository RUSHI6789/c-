#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter num:";
    cin>>num;
    if(num % 15==0)
    {
        cout<<"\n 5 & 3 divisbel by 5 & 3 :"<<num;
    }
    else
    {
        cout<<"\n 5 & 3 not divisbel by 5 & 3 :"<<num;
    }
    return 0;
}