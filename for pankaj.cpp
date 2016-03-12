
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,cab=0;
        cin>>n;

        int pass[n];
        for(int i=0;i<n;i++)
            cin>>pass[i];

        map<int,int> m;

        for(int i=0;i<n;i++)
            m[pass[i]]++;

        int o_t = min(m[1],m[3]);
        m[1]-=o_t;
        m[3]-=o_t;

        cab+=m[3];
        cab+=o_t;


        if(m[1]>3)
        {
            int f_o = (m[1]-m[1]%4)/4;
            cab+=f_o;
            m[1]=m[1]-(f_o*4);
        }

        if(m[1]>1)
        {
            int t_o = (m[1]-m[1]%2)/2;
            m[2]+=t_o;
            m[1]=m[1]-(t_o*2);
        }

        int twos = (m[2]-m[2]%2)/2;
        cab+=twos;
        m[2]=m[2]-(twos*2);


        if(m[1]>0 || m[2]>0)
            cab++;

        cab+=m[4];

        cout<<cab<<endl;

    }
}
