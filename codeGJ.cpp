#include<bits/stdc++.h>
using namespace std;

bool cmp(int a , int b)
{
    return a>b;
}

int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n,cmp);

        long long int sum=a[0]+a[1];
        long long int temp=sum;

        for(int k=2;k<n;k++)
        {
            sum = sum+a[k];
            temp+=sum;
        }

        cout<<temp<<endl;
    }
}
