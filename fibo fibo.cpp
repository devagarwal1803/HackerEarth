#include<iostream>
using namespace std;


struct ss
{
    int zeros;
    int ones;
};


int main()
{

    struct ss s[41];

    s[0].zeros=1;
    s[0].ones=0;
    s[1].zeros=0;
    s[1].ones=1;

    for(int i=2;i<41;i++)
    {
        s[i].zeros = s[i-1].zeros + s[i-2].zeros;
        s[i].ones = s[i-1].ones + s[i-2].ones;

        cout<<s[i].zeros<<" "<<s[i].ones<<endl;
    }

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        cout<<s[n].zeros<<" "<<s[n].ones<<endl;
    }


}
