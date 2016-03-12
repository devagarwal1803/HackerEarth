#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int servers=0;
        int unsolved=0;

        for(int i=0;i<n;i++)
            {
                int temp;
                cin>>temp;

                if(temp==-1)
                {
                    if(servers==0)
                    unsolved++;
                    else
                    servers--;
                }
                else
                    servers+=temp;

            }
        cout<<unsolved<<endl;


    }

}
