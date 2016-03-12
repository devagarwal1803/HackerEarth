#include<iostream>
using namespace std;

long long int F(int a, int b , int c , int d , int t)
{
    return (long long int)((a*t*t*t)+(b*t*t)+(c*t)+(d));
}

int func(int a, int b , int c , int d , int k ,int l , int r)
{

    if(l<=r)
    {

        int mid =(l+r)/2;
        long long int f = F(a,b,c,d,mid);

        cout<<"mid is "<<mid<<"F() is "<<f<<endl;

        if(f<=k && f>k)
        return mid;

        if(f < k )
        return func(a,b,c,d,k,mid,r);

        if(f == k)
        return mid;

        if(f > k )
        return func(a,b,c,d,k,l,mid);
    }
}


int main()
{
    int t;
    //cin>>t;

    t=0;

    int a=t;

    while(a!=10000)
    {
//        int a,b,c,d,k;
//        cin>>a>>b>>c>>d>>k;
//
//        cout<<func(a,b,c,d,k,0,10000);

            cout<<a<<" "<<F(2,2,2,2,a)<<endl;
            a+=100;
    }
}
