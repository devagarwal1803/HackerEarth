#include<bits/stdc++.h>
using namespace std;


class graph
{
private:
    int v;
    int l[100][100];
public:
    graph(int n)
    {
        v=n;
        for(int i=0;i<=n;i++)
            for(int j=0;j<=n;j++)
                l[i][j]=INT_MAX;
    }

    void add_edge(int a ,int b , int e)
    {
        l[a][b]=e;
        l[b][a]=e;
    }

    int find_minimum( int distance[] , bool intree[] )
    {
        int min_ = INT_MAX;
        int min_index;

        for(int i=0;i<=v;i++)
        {
            if(!intree[i] && distance[i]<= min_ )
                min_=distance[i],min_index=i;
        }

        return min_index;
    }

    void dikstra( int source )
    {
        int distance[v+1];
        bool intree[v+1];
        for(int i=0;i<=v;i++)
            distance[i]=INT_MAX,intree[i]=false;

        distance[source]=0;

        for(int i=0;i<=v;i++)
        {
            int minimum_available = find_minimum( distance , intree );

            intree[minimum_available]=true;

            for(int i=0;i<=v;i++)
            {
                if(!intree[i] && l[minimum_available][i]!=INT_MAX && distance[i]>(l[minimum_available][i]+distance[minimum_available]))
                    distance[i]=l[minimum_available][i]+distance[minimum_available];
            }
        }


        for(int i=0;i<=v;i++)
            cout<<distance[i]<<" ";

        }


};

int main()
{
    int n,e;
    cin>>n>>e;

    graph g(n);

    while(e--)
    {
        int s,d,x;
        cin>>s>>d>>x;
        g.add_edge(s,d,x);
    }

    g.dikstra(1);

}
