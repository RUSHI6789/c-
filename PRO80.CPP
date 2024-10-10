#include<iostream>
using namespace std;
int main()
{
    char i,j,r=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<" "<<r;
            r++;
        }
        cout<<"\n";
    }
    return 0;
}
