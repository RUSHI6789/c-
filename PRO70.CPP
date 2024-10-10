#include<iostream>
using namespace std;
int main()
{
    char i,j,r='A';
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cout<<" "<<r;
            r++;
        }
        cout<<"\n";
    }
    return 0;
}
