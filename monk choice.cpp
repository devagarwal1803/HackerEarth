#include<bits/stdc++.h>
using namespace std;

int setbits(int n)
{
    int counter=0;
    while(n)
    {
        counter+=n%2;
        n=n/2;
    }
    return counter;
}

bool cmp(int a , int b)
{
    return a<b;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        vector<int> v;
        cin>>n>>k;
        for(int i=0;i<n;i++)
            {
                int temp;
                cin>>temp;

                cout<<"for "<<temp<<" "<<setbits(temp)<<endl;

                v.push_back(setbits(temp));
            }
        sort(v.begin(),v.end(),cmp);
        int counter=0;
        for(int i=0;i<k;i++)
            counter+=v[i];
        cout<<counter<<endl;

    }

}
