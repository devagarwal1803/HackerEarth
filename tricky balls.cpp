#include<bits/stdc++.h>
using namespace std;

void mark(vector<bool> &prime , int k)
{
    int temp=k;
    temp+=k;
    while(temp<=1000000)
    {
        prime[temp]=false;
        temp+=k;
    }
}

vector<bool> get_prime()
{
    vector<bool> prime(1000000);
    for(int i=0;i<1000000;i++)
        prime[i]=true;

    for(int i=2;i<1000000;i++)
    {
        if(prime[i]==true)
            mark(prime,i);
    }

    return prime;

}

int main()
{
    vector<bool> prime = get_prime();
    vector<long long int> s;
    for(int i=1;i<=31622;i++)
        s.push_back(i*i);

    int t;
    cin>>t;

    while(t--)
    {
        long long int n;
        cin>>n;

        long long int counter=0;
        long long int i=0;

        while(s[i] <= n)
            {
                counter++;
                i++;
            }

        if(prime[counter] == true)
            cout<<"golden ball is selected"<<endl;
        else
            cout<<"silver ball is selected"<<endl;
    }
}
