ng namespace std;
int main()
{
    int a,b,c;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;
    cout<<"enter c:";
    cin>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<"\n a largest :"<<a;
        }
        else
        {
            cout<<"\n c largest :"<<c;
        }
    }
    else
    {
        if(b>c)
        {
            cout<<"\n b largest :"<<b;
        }
        else
        {
            cout<<"\n c largest :"<<c;
        }
    }
    return 0;
}
