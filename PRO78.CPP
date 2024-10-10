#include<iostream>
using namespace std;
int main()
{
    int i,j;
    char ch='A';
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                cout<<" "<<ch+32;
            }
            else
            {
                cout<<" "<<ch;
            }
            ch++;
        }
        cout<<"\n";
    }
    return 0;
}
