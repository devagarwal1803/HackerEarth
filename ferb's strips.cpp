#include<iostream>
using namespace std;

bool cmp( pair<int,int> a, pair<int,int> b)
{
    return a.second>b.second;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        map<int,int> m;
        vector< pair<int,int> > v;

        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            m[temp]++;
        }

        for(it=m.begin();it!=m.end();it++)
            v.push_back(make_pair( (*it).first , (*it).second );

        sort(v.begin(),v.end(),cmp);




    }
}
