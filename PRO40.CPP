#include<iostream>
using namespace std;
int main()
{
    float unit,r,total;
    cout<<"\n Enter unit :";
    cin>>unit;
    if(unit>0 && unit<=100)
    {
        r=50+total*0.60;
        cout<<"\n amo :"<<r;
    }
    else
    {
        if(r>100 && r<=300)
        {
            r=unit*0.80+50;
            cout<<"\n2 amo :"<<r;
        }
        else
        {
            if(r>300)
            {
                r=unit*0.90+50;
                cout<<"\n3 amo :"<<r;
            }
        }
        if(r>=300)
        {
            total=r*1.15;
            cout<<"\n4 total :"<<total;
        }
    }
    return 0;
}

