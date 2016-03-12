#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    map<string,int> m;
    map<string,int>::iterator it;

    while(t--)
    {
        string s;
        cin>>s;

        m[s]++;
    }


    int max_ = 0;
    string ss;

    for(it=m.begin();it!=m.end();it++)
    {
        if((*it).second > max_ )
        {
            max_ = (*it).second;
            ss = (*it).first;
        }
    }

    cout<<ss<<endl;

}
