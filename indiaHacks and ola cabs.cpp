#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        map<int,int> m;

        for(int i=0;i<n;i++)
            {
                int temp;
                cin>>temp;
                m[temp]++;
            }

        int cabs=0;

        cabs+=m[4];

        int one_three = min(m[1],m[3]);
        m[1]-=one_three;
        m[3]-=one_three;

        cabs+=m[3];
        cabs+=one_three;


        if(m[1]>3)
        {
            int four_ones = (m[1]-m[1]%4)/4;
            cabs+=four_ones;
            m[1]=m[1]-(four_ones*4);
        }

        if(m[1]>1)
        {
            int two_ones = (m[1]-m[1]%2)/2;
            m[2]+=two_ones;
            m[1]=m[1]-(two_ones*2);
        }

        int twos = (m[2]-m[2]%2)/2;
        cabs+=twos;
        m[2]=m[2]-(twos*2);


        if(m[1]>0 || m[2]>0)
            cabs++;

        cout<<cabs<<endl;

    }
}
