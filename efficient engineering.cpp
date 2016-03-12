#include<iostream>
using namespace std;

bool check(int a[] , int j , int k)
{
    for(int i = j ; i<j+k ; j++ )
        if(a    [i]!=0)
            return true;

    return false;
}

int main()
{
    int n,k,d;
    cin>>n>>k>>d;

    int arr[n];
    int sub[n-k+1];
    bool def[n-k+1];

    int zc,mz=0;
    int state;

    cin>>arr[0];

    if(arr[0]==0)
        {
            state=1;
            zc=1;
        }
    else
        {
            state=2;
            zc=0;
        }

    for(int i=1;i<n;i++)
    {
        cin>>arr[i];

        if(state==1)
        {
            if(arr[i]==0)
            {
                zc++;
                if(zc>mz)
                    mz=zc;
            }
            else
                {
                    zc=0;
                    state=2;
                }
        }

        if(state==2)
        {
            if(arr[i]==0)
                {
                    state=1;
                    zc++;
                }
            else
                zc=0;
        }
    }

    if(mz>=k)
    {
        cout<<-1<<endl;
        return 0;
    }

    int i=0;
    int j=k;

    int sum=0;

    for(int x=i;x<j;x++)
        sum+=arr[x];

    if(sum>=d)
        def[0]=false;
    else
        def[0]=true;

    sub[0]=sum;

    for(int x=1;x<=n-k;x++)
    {
        sum = sum-arr[i]+arr[j];

        if(sum>=d)
            def[x]=false;
        else
            def[x]=true;

        sub[x]=sum;
        i++;
        j++;
    }

    int operation=0;

    for(int i=0;i<=n-k;)
        {
            if(def[i])
            {
                operation++;
                i+=k;
            }
            else
                i++;
        }

    cout<<operation<<endl;


}
