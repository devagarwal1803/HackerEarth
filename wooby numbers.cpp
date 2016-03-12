#include<bits/stdc++.h>
using namespace std;

void print_wooby_number(int l , int a , int b )
{
    int k=0;
    while(l--)
    {
        if(k%2==0)
            cout<<a;
        else
            cout<<b;

        k++;
    }
}

int main()
{
    int t;
    cin>>t;

    vector< vector<int> > precompute(10,vector<int>(10));

    for(int i=1;i<10;i++)
    {
        int k=0;
        for(int j=0;j<10;j++)
        {
            if(k==i)
                j--;
            else
                precompute[i][j]=k;

            k++;
        }
    }

//    for(int i=1;i<10;i++)
//    {
//        for(int j=0;j<9;j++)
//            cout<<precompute[i][j]<<" ";
//        cout<<endl;
//    }

    map<int,pair<int,int> > final_list;
    map<int,pair<int,int> >::iterator it;
    int counter=1;

    for(int i=1;i<10;i++)
        for(int j=0;j<9;j++)
            final_list[counter++] = make_pair(i,precompute[i][j]);

//
//    for(it=final_list.begin();it!=final_list.end();it++)
//        cout<<(*it).first<<" ->"<<"("<<(*it).second.first<<","<<(*it).second.second<<")"<<endl;

    while(t--)
    {
        int length , order;
        cin>>length>>order;

        if(order > 81 )
        {
            cout<<-1<<endl;
            continue;
        }

        int first_number = final_list[order].first;
        int second_number = final_list[order].second;

        print_wooby_number(length,first_number,second_number);
        cout<<endl;

    }
}
