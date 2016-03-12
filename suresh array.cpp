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
        multiset<int> s;
        int te[n];

        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;

            s.insert(temp);
        }

        int k=0;
        set<int>::iterator le;

        for(le=s.begin();le!=s.end();le++)
            te[k++]=*le;

        int l=0;
        int r=n-1;

        while(l<=r)
        {

            if(l==r)
                {
                    cout<<te[r]<<" ";
                    l++;
                    r--;
                }
            else
            {
            cout<<te[l]<<" "<<te[r]<<" ";
            l++;
            r--;
            }
        }

        cout<<endl;
}
}
