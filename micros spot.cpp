#include<iostream>
#include<map>
using namespace std;

struct p
{
    int x,y;
    int counter;
};

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m;
        cin>>n>>m;

        long long int A[n][m];
        long long int B[n][m];

        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            cin>>A[i][j];

        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            cin>>B[i][j];

        struct p a[n],b[m];


        for(int i=0;i<n;i++)
        {
            long long int ma=-1;
            int x,y;
            int co=0;
            for(int j=0;j<m;j++)
            {
               if(A[i][j] >= ma)
               {
                   if(A[i][j]==ma)
                    co++;

                   ma=A[i][j];
                   x=i;
                   y=j;
               }
            }

            a[i].x=x;
            a[i].y=y;
            a[i].counter=co;
        }

        for(int j=0;j<m;j++)
        {
            long long int ma=-1;
            int co=0;
            for(int i=0;i<n;i++)
            {
               if(B[i][j] >= ma)
               {
                   if(B[i][j] == ma)
                    co++;

                   ma=B[i][j];
                   b[j].x=i;
                   b[j].y=j;
               }
               b[j].counter=co;

            }
        }

//        for(int i=0;i<n;i++)
//            cout<<a[i].x<<","<<a[i].y<<" ";
//        cout<<endl;
//        for(int i=0;i<m;i++)
//            cout<<b[i].x<<","<<b[i].y<<" ";
//        cout<<endl;

        map< pair<int,int> , int > mad;
        map< pair<int,int> , int >::iterator it;

        int counter = 0;

        for(int i=0;i<n;i++)
            mad[make_pair(a[i].x,a[i].y)]++;

        for(int i=0;i<m;i++)
            mad[make_pair(b[i].x,b[i].y)]++;


        for(it=mad.begin();it!=mad.end();it++)
            counter+= ((*it).second-1);

        cout<<counter;




    }
}
