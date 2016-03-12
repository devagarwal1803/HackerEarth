#include<iostream>
using namespace std;


struct chest
{
    int key_needed;
    int keys_have;
    int *keys;
};

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int k,n;
        cin>>k>>n;

        struct chest chests[n];
        int keys[k];

        for(int i=0;i<k;i++)
            cin>>keys[i];

        for(int i=0;i<n;i++)
        {
            int ti,ki;
            cin>>ti>>ki;

            chests[i].key_needed=ti;
            chests[i].keys_have=ki;
            chests[i].keys = new int[ki];

            for(int k=0;k<ki;k++)
            {
                int temp;
                cin>>temp;

                chests[i].keys[k]=temp;
            }
        }




    }
}
