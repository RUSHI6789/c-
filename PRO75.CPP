#include<iostream>
using namespace std;
int main()
{
    int i,j,r;
    char ch='A';
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=i;j++)
        {
            r='A'-j;
            cout<<" "<<r+i;
        }
        cout<<"\n";
    }
    return 0;
}
