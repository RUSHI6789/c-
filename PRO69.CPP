#include<iostream>
using namespace std;
int main()
{
    int i,j,r=11;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cout<<" "<<r;
            r++;
        }
        r=r+5;
        cout<<"\n";
    }
    return 0;
}
