#include<iostream>
using namespace std;
int main()
{
    int i,j,sp=10;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=sp;j++)
            cout<<"_";
        for(j=5;j>=i;j--)
        {
            cout<<"_*";
        }
        sp++;
        cout<<"\n";
    }
    return 0;
}
