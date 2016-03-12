#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long int n;
        cin>>n;
        map<int,int> m;


        while (n%2 == 0)
            {
                m[2]++;
                n = n/2;
            }

        for (int i = 3; i <= sqrt(n); i = i+2)
            {
                while (n%i == 0)
                    {
                        m[i]++;
                        n = n/i;
                    }
            }

        if (n > 2)
            m[n]++;



        map<int,int>::iterator it;

        for(it=m.begin();it!=m.end();it++)
            cout<<(*it).first<<" "<<(*it).second<<endl;
    }
}
