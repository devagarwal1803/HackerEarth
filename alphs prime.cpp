#include<bits/stdc++.h>
using namespace std;

vector<int> v(1000000);

void mark(int i,bool p[],int n)
{
    for(int k=i;k<=n;k+=i)
        p[k]=false;
}

void prime(int n)
{
    bool p[n+1];
    for(int i=0;i<=n;i++)
        p[i]=true;

    for(int i=2;i<=n;i++)
    {
        if(p[i]==true)
        {
            v[i]=true;
            mark(i,p,n);
        }
    }
}


bool is_alpha_prime(int n)
{
    int suffix=0;
    int k=0;

    while(n)
    {
       int temp = n%10;
       int power = 1;

       for(int i=0;i<k;i++)
        power*=10;
       suffix+= temp*power;

       k++;
       n=n/10;

       if(v[suffix]==true)
        return true;
    }

    return false;
}


int main()
{
    prime(100);

    is_alpha_prime(254);


    bool is_prime[1000001];

    for(int i=0;i<1000001;i++)
        is_prime[i]=is_alpha_prime(i);

    int q;
    //cin>>q;

    q=1000;

    while(q--)
    {
        int l,r;
        //cin>>l>>r;

        l=1;
        r=1000000;

        int counter=0;

        for(int i=l;i<=r;i++)
            if(is_prime[i]==true)
            counter++;

        cout<<counter<<endl;
    }
}
