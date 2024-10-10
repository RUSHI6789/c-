#include<iostream>
using namespace std;
int main()
{
    int i,j,r=1;
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<" "<<i+r;
        }
        cout<<"\n";
    }
    return 0;
}
