#include<iostream>
using namespace std;
int main()
{
    float math,phy,chem,total,per;
    cout<<"\n Enter math:";
    cin>>math;
    cout<<"\n Enter phy:";
    cin>>phy;
    cout<<"\n Enter chem:";
    cin>>chem;

    total=math+phy+chem;
    cout<<"\n total :"<<total;

    per=total*100/300;
    cout<<"\n per :"<<per;
    return 0;
}