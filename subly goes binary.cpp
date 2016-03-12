#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    int t;
    cin>>t;

    while(t--)
    {
        cin>>n;
        int r=n-1;

        int counter=0;

        while(r<s.size())
        {
            if(s[r]=='0' && s[r-1]=='0')
                counter++;
            r++;
        }

        cout<<counter<<endl;
    }
}
