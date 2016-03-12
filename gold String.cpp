#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        if(s.size()==1)
        {
            cout<<"NO"<<endl;
            continue;
        }

        int state;
        int zeros=0;
        int ones=0;

        if(s[0]=='0')
            state=3;
        else
            state=4;

        for(int i=1;i<s.size();i++)
        {
            if(state==1)
            {
                if(s[i]=='0')
                    state=3;
                else
                    state=4;
            }
            else if(state==2)
            {
                if(s[i]=='1')
                    state=4;
                else
                    state=3;
            }
            else if(state==3)
            {
                if(s[i]=='0')
                    zeros++;
                else
                    state=4;
            }
            else if(state==4)
            {
                if(s[i]=='1')
                    ones++;
                else
                    state=3;
            }
        }

        if(ones==zeros)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
