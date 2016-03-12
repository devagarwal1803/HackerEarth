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

        int state;
        if(s[0]=='X'||s[0]=='x')
            state=1;
        else
            state=2;

        int operations=0;

        for(int i=1;i<s.size();i++)
        {
            if(state==1)
            {
                if(s[i]=='X'||s[0]=='x')
                    operations++;
                else
                    state=2;
            }
            else
            {
                if(s[i]=='Y'||s[i]=='y')
                    operations++;
                else
                    state=1;
            }
        }

        cout<<operations<<endl;

    }
}
