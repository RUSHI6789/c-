#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"\n enter ch:";
    cin>>ch;
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        cout<<"\n char is vowel :";
    }
    else
    {
        cout<<"\n char is consonant :";
    }
    return 0;
}

