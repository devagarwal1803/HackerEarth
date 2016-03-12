#include<bits/stdc++.h>
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
    vector<int> prime;
    prime = generate_prime(10000000);

    cout<<" generated "<<prime.size();

    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        map<char,int> m;
        map<char,int>::iterator it;

        for(int i=0;i<s.size();i++)
            m[s[i]]++;

        bool isprimestring=true;

        if(!prime[m.size()])
        {
            cout<<"NO"<<endl;
            continue;
        }

        for(it=m.begin();it!=m.end();it++)
        {
            if(!prime[(*it).second])
            {
                isprimestring=false;
                break;
            }
        }

        if(!isprimestring)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;


    }



}
