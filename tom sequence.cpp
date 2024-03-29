#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;



void mark(bool numbers[] , int p , int n)
{
    int k=p;
    while(p<=n)
    {
        numbers[p]=false;
        p+=k;
    }
}

vector<int> generate_prime(int n)
{
    vector<int> prime;

    bool *numbers;
    numbers = new bool[n+1];

    for(int i=0;i<=n;i++)
        numbers[i]=true;

    int p = 2;
    while((p)<=n)
    {
        if(numbers[p]==true)
            {
                mark(numbers,p,n);
                prime.push_back(p);
            }
        p++;
    }

    return prime;
}




int main()
{
    int t;
    cin>>t;


    vector<int> prime;
    prime = generate_prime(10000000);


    long long int dp[100000];
    dp[0]=2;

    for(int i=1;i<100000;i++)
        dp[i] = (dp[i-1]*prime[i])%mod;

    /*for(int i=0;i<100000;i+=1000)
        cout<<dp[i]<<" ";
        */

    while(t--)
    {
        int n;
        cin>>n;

        cout<<dp[n-1]<<endl;
    }
}
