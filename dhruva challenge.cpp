#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(pair<int,int> a , pair<int,int> b)
{
    return a.second > b.second;
}

int main()
{
    int n,q;
    cin>>n>>q;

    vector< pair<int,int> > v;

    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        v.push_back( make_pair(temp,1));
    }

    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        v[i].second = temp;
    }

    sort(v.begin(),v.end(),cmp);

    while(q--)
    {
        int k;
        cin>>k;

        int sum=0;

        for(int i=0;i<k;i++)
            sum+=v[i].first;

        cout<<sum<<endl;
    }

}
