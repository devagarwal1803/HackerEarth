#include<bits/stdc++.h>
#include<map>
using namespace std;

int main()
{
    int t;
    cin>>t;

    map<char,int>::iterator it;
    map<char,int> test;


    char temp = 'Z';
    int temp_count = 1;

    while(temp_count != 27)
    {
        test[temp] = temp_count;
        temp--;
        temp_count++;
    }


    while(t--)
    {
        string s;
        cin>>s;

        map<char,int> m;
        for(int i=0;i<s.size();i++)
            m[s[i]]++;

        bool flag=true;

        for(it=m.begin();it!=m.end();it++)
        {
            if(test[(*it).first] != (*it).second)
            {
                flag=false;
                break;
            }
        }

        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
