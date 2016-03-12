#include<iostream>
#include<algorithm>
using namespace std;

void mark(bool a[] , int b,int m)
{
    int temp=b*2;
    for(;temp<=m;temp+=b)
        a[temp]=false;
}

int main()
{
    int n;
    cin>>n;

    int a[n];
    int k[n];
    int max_=0;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>max_)
            max_=a[i];

        k[i]=a[i];
    }

    sort(a,a+n);

    bool prime[max_+1];

    for(int i=0;i<=max_;i++)
        prime[i]=true;

    for(int i=0;i<n;i++)
        mark(prime,a[i],max_+1);

    for(int i=0;i<n;i++)
    {
        if(prime[k[i]] == true)
            cout<<k[i]<<" ";
    }
}
