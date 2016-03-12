#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a[3];
        cin>>a[0]>>a[1]>>a[2];

        sort(a,a+3);

        int p=a[2]-a[1];
        int q=a[1]-a[0];

        if(p>q)
            cout<<p-1<<endl;
        else
            cout<<q-1<<endl;


    }
}
