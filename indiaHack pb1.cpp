#include<bits/stdc++.h>
#include<map>
using namespace std;

int main()
{
    int n;
    cin>>n;

    map<string,int> m;

    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;

        m[s]++;
    }

    map<string,int>::iterator it;

    cout<<endl;

    for(it=m.begin();it!=m.end();it++)
    {
        string temp = (*it).first ;
        reverse(temp.begin(),temp.end());

        if(m[temp]!=0)
            {cout<<temp.size()<<" "<<temp[(temp.size()-1)/2]<<endl;cout<<temp<<endl;}
    }

}
