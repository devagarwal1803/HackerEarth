#include<iostream>
using namespace std;

bool check( int a , int b )
{
    if(a==b)
        return true;

    if(a==b-1)
        return true;
    if(b==a-1)
        return true;

    return false;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        int state;
        if(s[0]=='U')
            state=1;
        else
            state=2;

        int us=0;
        int ss=0;

        int ns=0;
        int nu=0;

        for(int i=1;i<s.size();i++)
        {
            if(state==1)
            {
                if(s[i]=='U')
                    us++;
                else
                    state=2;
            }
            else
            {
                if(s[i]=='U')
                    state=1;
                else
                    ss++;
            }
        }


        if(check(ns,nu) == false)
        {
            cout<<-1<<endl;
            continue;
        }


        if(us==ss)
            cout<<us<<endl;
        else
            cout<<-1<<endl;
    }
}
