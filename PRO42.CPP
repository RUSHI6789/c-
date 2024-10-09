#include<iostream>
using namespace std;
int main()
{
    float in,tax;
    cout<<"\n enter in :";
    cin>>in;
    if(in<2500)
    {
        tax=0;
    }
    else if(in>=2500 && in<5000)
    {
        tax=0.1*(in-2500);
    }
    else if(in>=5000 && in<10000)
    {
        tax=0.1*(5000-2500)+0.2*(in-5000);
    }
    else
    {
        tax=0.1*(5000-2500)+0.2*(10000-5000)+0.3*(in-10000);
    }
    cout<<"\n tax :"<<tax;
    return 0;
}
