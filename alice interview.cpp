#include<iostream>
using namespace std;

bool func(int n)
{
    bool flag = false;
    while(n)
    {
        int temp = n%10;
        if(temp==4 ||temp==6 ||temp==8 ||temp==9 ||temp==0)
        {
            flag = true;
            break;
        }
        n=n/10;
    }

    return flag;
}

int main()
{
    int n;
    cin>>n;
    int counter = 0;

    for(int i=1;i<=n;i++)
    {
        if(func(i))
            counter++;
    }

    cout<<counter;
}
