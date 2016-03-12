#include<iostream>
using namespace std;

int add(string a, string b)
{
    int al=a.size()-1;
    int bl=b.size()-1;

    int carry=0;
    int carry_count=0;

    string result="";

    while(al>=0 && bl>=0)
    {
        int temp = (int)(a[al] - '0') + (int)(b[bl] - '0') + carry ;

        if(temp > 9 )
        {
            carry=1;
            temp=temp-10;
            carry_count++;
        }

        result+=char(temp + '0');
        al--;
        bl--;
    }

    while(al>=0)
        {
            int temp = (int)(a[al] - '0') + carry ;
            if(temp>9)
            {
                carry=1;
                temp=temp%10;
                carry_count++;
            }

            result+=char(temp + '0');
            al--;
        }

    while(bl>=0)
        {
            int temp = (int)(b[bl] - '0') + carry ;
            if(temp>9)
            {
                carry=1;
                temp=temp%10;
                carry_count++;
            }

            result+=char(temp + '0');
            bl--;
        }

    return carry_count;
}


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string a;
        string b;

        cin>>a>>b;

        int temp = add(a,b);

        if(temp==0)
            cout<<"No carry operation"<<endl;
        else if(temp==1)
            cout<<"1 carry operation"<<endl;
        else
            cout<<temp<<" carry operations"<<endl;
    }
}
