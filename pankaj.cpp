#include<iostream>

using namespace std;


int main()
{
    long long x=1,temp;


    while(x++ )
    {
        temp=4*(256*x-2101);
        if(temp%3125==0)
            break;
    }
            cout<<x;
}
