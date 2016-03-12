#include<iostream>
#include<map>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int a[n];
        map<int,int> m;

        for(int i=0;i<n;i++)
            {
                cin>>a[i];
                m[a[i]]++;
            }

        int temp;
        cin>>temp;

        int counter=0;

        for(int i=0;i<n;i++)
        {
            if(temp%a[i]==0)
            {
                int other = temp/a[i];
                counter += m[other];
            }
        }

        cout<<counter<<endl;
    }
}
