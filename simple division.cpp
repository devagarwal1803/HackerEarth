#include<bits/stdc++.h>
#include<string>
using namespace std;


string convert(int a)
{
    string s="";
    while(a)
    {
        s+=(char)(a%10 + '0');
        a=a/10;
    }

    string k="";
    for(int i=s.size()-1;i>=0;i--)
        k+=s[i];

    return k;
}

int main()
{

    int t;
    cin>>t;

    while(t--)
    {

        int a,b,c;
        cin>>a>>b>>c;

        if(c==0)
            cout<<(int)(a/b)<<endl;
        else
        {
            string s = "%."+convert(c+1)+"f";
            char cmd[s.size()];
            int i;
            for(i=0;i<s.size();i++)
                cmd[i]=s[i];
                cmd[i]='\0';

            printf(cmd,(double)(a*1.0/b*1.00));
            cout<<endl;
        }
    }

}
