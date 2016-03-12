#include<iostream>
#define MOD 1000000007
using namespace std;

long long power(long long x, long long y)
{
    long long sum=1;
        for(int i=1;i<=y;i++)
        {
            sum=((sum)%MOD * x%MOD )%MOD ;
        }
        return sum;
}

int main()
{
    cout<<power(2,1000000);


}
