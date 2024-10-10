#include<iostream>
using namespace std;
int main()
{
    char i,j,a='A';
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<" "<<a+j;
        }
        cout<<"\n";
    }
    return 0;
}
