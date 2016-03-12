#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        int n,d;
        cin>>n>>d;

        int time[n];
        int changu_time=0;
        int total_time=0;

        for(int i=0;i<n;i++)
            {
                cin>>time[i];
                changu_time+=time[i];
            }
        total_time=changu_time+(n-1)*10;

        if(total_time>d)
        {
            cout<<-1<<endl;
            continue;
        }

        int mangu_time=d-changu_time;
        cout<<(int)(mangu_time/5)<<endl;
    }
}
