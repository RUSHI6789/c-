#include<iostream>
using namespace std;
int main()
{
    int i,j,r=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(r%2==0)
            {
                cout<<" "<<(0);
            }
            else
            {
                cout<<" "<<(1);
            }
            r++;
        }
        cout<<"\n";
    }
    return 0;
}
