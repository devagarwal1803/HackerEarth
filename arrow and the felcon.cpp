#include<iostream>
#include<map>
using namespace std;

int main()
{
    int t;
    cin>>t;

    map<int,int> fives;
    map<int,int> threes;

    map<int,int>::iterator it;

    for(int i=5;i<=10000;i+=5)
        fives[i]=1;

    for(int i=3;i<=10000;i+=3)
        threes[i]=1;

    /*for(it=fives.begin();(*it).first<=30;it++)
        cout<<(*it).first<<" ";
    cout<<endl;

    for(it=threes.begin();(*it).first<=30;it++)
        cout<<(*it).first<<" ";
    cout<<endl;
    */


    while(t--)
    {
        int x;
        cin>>x;

        if(x<3)
        {
            cout<<-1<<endl;
            continue;
        }

        if(x%3==0)
        {
            for(int i=0;i<x;i++)
                cout<<5;

            cout<<endl;
            continue;
        }
        else
        {

            int f5=-1,t3=-1;

            //cout<<"chech five"<<endl;

            for(int k=5;k<=x;k+=5)
            {
                int temp = x-k;

                //cout<<"Check "<<k<<" "<<temp<<" sum ->"<<temp+k<<endl;

                if(threes[temp]==1)
                {
                    //cout<<"fda";
                    f5=k;
                    t3=temp;
                }
            }

            if(f5!=-1 && t3!=-1)
            {

                for(int i=0;i<t3;i++)
                    cout<<5;
                for(int i=0;i<f5;i++)
                    cout<<3;

                cout<<endl;
                continue;
            }

            //cout<<"chech three"<<endl;
            for(int k=3;k<=x;k+=3)
            {
                int temp = x-k;

                //cout<<"Check "<<k<<" "<<temp<<" sum ->"<<temp+k<<endl;

                if(fives[temp]==1)
                {
                    //cout<<"dsa";
                    t3=k;
                    f5=temp;
                }
            }

            if(f5!=-1 && t3!=-1)
            {
                for(int i=0;i<t3;i++)
                    cout<<5;
                for(int i=0;i<f5;i++)
                    cout<<3;

                cout<<endl;
                continue;
            }
        }

        if(x%5==0)
        {
           for(int i=0;i<x;i++)
                cout<<3;
           cout<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}
