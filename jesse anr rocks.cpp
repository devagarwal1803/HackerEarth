#include<iostream>
using namespace std;

int main()
{
    int n,s;
    cin>>n>>s;

    int counter = 0;
    int a[n];
    bool isskipped=false;
    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=0;i<n;i++)
    {
        if(s >= a[i])
            counter++;
        else
        {
            if(isskipped == false)
            {
               isskipped=true;
            }
            else
            {
                break;
            }
        }
    }

    cout<<counter<<endl;
}
