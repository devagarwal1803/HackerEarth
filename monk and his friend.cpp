#include<iostream>
#include<stdio.h>
#include<map>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        map<long long int , bool > m;
        int n,k;
        scanf("%d %d",&n,&k);

        while(n--)
        {
            long long int temp;
            scanf("%lld",&temp);
            m[temp]=true;
        }

        while(k--)
        {
            long long int temp;
            scanf("%lld",&temp);

            if(m[temp]!=true)
            {
                cout<<"NO"<<endl;
                m[temp]=true;
            }
            else
                cout<<"YES"<<endl;
        }
    }
}
