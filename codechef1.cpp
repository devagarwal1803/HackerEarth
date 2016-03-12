#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n+1];
    bool b[n+1];

    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        b[i]=true;
    }

    for(int i=1;i<=n;i++)
        b[a[i]]=false;

    for(int i=1;i<=n;i++)
        if(b[i]==true)
            cout<<i<<" ";
}
