#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string s;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>s;

        int cnt=0,i=0,l=s.size(),del=0;


        if(s[0]=='x')
        {
            for(i=0;i<l;)
            {
                while(s[i]=='x')
                {
                    cnt++;
                    i++;
                }
                if(cnt>1)
                del+=cnt-1;

                cnt=0;
                while(s[i]=='y')
                {
                    cnt++;
                    i++;
                }
                if(cnt>1)
                del+=cnt-1;

            }
            cout<<del<<endl;
        }
        else
        {
            for(i=0;i<l;)
            {
                while(s[i]=='y')
                {
                    cnt++;
                    i++;
                }
                if(cnt>1)
                del+=cnt-1;

                cnt=0;
                while(s[i]=='x')
                {
                    cnt++;
                    i++;
                }
                if(cnt>1)
                del+=cnt-1;

            }
            cout<<del<<endl;
        }

    }


    return 0;
}
