#include<iostream>
using namespace std;

int hcf(int a , int b)
{
    while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    return a;
}

int main()
{
    int s,q;
    cin>>s>>q;

    bool a[100001];
    for(int i=0;i<100001;i++)
        a[i]=false;

    while(q--)
    {
        int n;
        cin>>n;

        int x = hcf(s,n);

        if(a[x]==false)
        {
            cout<<x<<endl;
            a[x]=true;
        }
        else
            cout<<-1<<endl;
    }
}
