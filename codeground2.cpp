#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    int max_no=0;

    for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i] > max_no)
                max_no = a[i];
        }

    bool temp[max_no+1];
    for(int i=0;i<max_no+1;i++)
        temp[i]=false;

    for(int i=0;i<n;i++)
        temp[a[i]]=true;

    int length=0;
    int max_length=0;


    for(int i=0;i<max_no+1;i++)
    {
        if(temp[i]==true)
        {
            length++;
            if(length > max_length)
                max_length = length;

        }
        else
        {
            length = 0;
        }
    }

    cout<<max_length;

}
