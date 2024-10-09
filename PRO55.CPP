#include<iostream>
using namespace std;
int main()
{
    char i,even=0,odd=0;
    for(i=1;i<=50;i++)
    {
        if(i%2==0)
        {
             even=even+i;
        }
         else
        {
            odd=odd+i;
        }
    }
    cout<<"\n even total :"<<even;
    cout<<"\n odd total :"<<odd;
    return 0;
}
