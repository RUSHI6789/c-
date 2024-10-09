#include<iostream>
using namespace std;
int main()
{
    int i,sum=0;
    for(i=1;i<=10;i++)
    {
        cout<<"\n "<<i;
        sum+=i;
    }
    cout<<"1 to 10 total :"<<sum;
    return 0;
}
