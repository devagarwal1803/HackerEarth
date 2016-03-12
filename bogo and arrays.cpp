#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;

        int temp[n];

        vector<int> v;

        for(int i=0;i<n;i++)
        {
            cin>>temp[i];

            if(temp[i]>k)
                v.push_back(i);
        }

        int total_subarays = 0;

        for(int i=0;i<v.size();i++)
        {
           total_subarays += (n-k)*(k+1);
        }

        for(int i=1;i<v.size();i++)
        {
            int overlap_subarray = 2*(n-temp[1]);
            total_subarays = total_subarays - overlap_subarray;
        }

        cout<<total_subarays<<endl;
    }
}
