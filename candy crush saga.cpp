#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int k=0;k<t;k++)
    {
        int n;
        cin>>n;

        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        int temp=a[0];

        int _min = temp;
        int _sum = temp;

        for(int i=1;i<n;i++)
            {
                temp=temp^a[i];

                _sum+=a[i];

                if(a[i]<_min)
                    _min=a[i];
            }

        if(temp==0)
            cout<<"Case #"<<k+1<<": "<<_sum-_min<<endl;
        else
            cout<<"Case #"<<k+1<<": NO"<<endl;



    }
}
